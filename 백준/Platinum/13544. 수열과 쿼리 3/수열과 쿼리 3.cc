#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, ans;
int a[100005];
vector<int> t[400005];

void build(int node, int s, int e) {
    if (s == e) {
        t[node].push_back(a[s]);
        return;
    }
    int mid = (s + e) >> 1;
    build(node << 1, s, mid);
    build(node << 1 | 1, mid + 1, e);
    auto &l = t[node << 1];
    auto &r = t[node << 1 | 1];
    t[node].resize(l.size() + r.size());
    merge(l.begin(), l.end(), r.begin(), r.end(), t[node].begin());
}

int query(int node, int s, int e, int l, int r, int k) {
    if (r < s || e < l) return 0;
    if (l <= s && e <= r) {
        return t[node].end() - upper_bound(t[node].begin(), t[node].end(), k);
    }
    int mid = (s + e) >> 1;
    return query(node << 1, s, mid, l, r, k) + query(node << 1 | 1, mid + 1, e, l, r, k);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);

    cin >> m;
    while (m--) {
        int x, y, z;
        cin >> x >> y >> z;
        int l = x ^ ans;
        int r = y ^ ans;
        int k = z ^ ans;
        ans = query(1, 1, n, l, r, k);
        cout << ans << '\n';
    }
    return 0;
}