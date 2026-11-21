#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> a, t[400000];

void bld(int idx, int l, int r) {
    if (l == r) { t[idx].push_back(a[l]); return; }
    int md = (l + r) >> 1;
    bld(idx << 1, l, md);
    bld(idx << 1 | 1, md + 1, r);
    auto &v = t[idx], &L = t[idx << 1], &R = t[idx << 1 | 1];
    v.resize(L.size() + R.size());
    merge(L.begin(), L.end(), R.begin(), R.end(), v.begin());
}

int cnt(int idx, int l, int r, int ql, int qr, int x) {
    if (qr < l || r < ql) return 0;
    if (ql <= l && r <= qr) return upper_bound(t[idx].begin(), t[idx].end(), x) - t[idx].begin();
    int md = (l + r) >> 1;
    return cnt(idx << 1, l, md, ql, qr, x) + cnt(idx << 1 | 1, md + 1, r, ql, qr, x);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    a.resize(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    bld(1, 1, n);
    while (m--) {
        int i, j, k; cin >> i >> j >> k;
        int lo = -1e9, hi = 1e9, ans = hi;
        while (lo <= hi) {
            int md = lo + (hi - lo) / 2;
            if (cnt(1, 1, n, i, j, md) >= k) ans = md, hi = md - 1;
            else lo = md + 1;
        }
        cout << ans << '\n';
    }
}