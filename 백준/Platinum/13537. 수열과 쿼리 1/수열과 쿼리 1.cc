#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> a, t[400004];

void build(int node, int s, int e) {
    if (s == e) {
        t[node].push_back(a[s]);
        return;
    }
    int mid = (s + e) / 2;
    build(node * 2, s, mid);
    build(node * 2 + 1, mid + 1, e);
    auto& l = t[node * 2];
    auto& r = t[node * 2 + 1];
    t[node].resize(l.size() + r.size());
    merge(l.begin(), l.end(), r.begin(), r.end(), t[node].begin());
}

int query(int node, int s, int e, int qs, int qe, int k) {
    if (qe < s || e < qs) return 0;
    if (qs <= s && e <= qe) {
        return t[node].end() - upper_bound(t[node].begin(), t[node].end(), k);
    }
    int mid = (s + e) / 2;
    return query(node * 2, s, mid, qs, qe, k) +
           query(node * 2 + 1, mid + 1, e, qs, qe, k);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    a.resize(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    build(1, 1, n);

    cin >> m;
    while (m--) {
        int i, j, k;
        cin >> i >> j >> k;
        cout << query(1, 1, n, i, j, k) << '\n';
    }

    return 0;
}