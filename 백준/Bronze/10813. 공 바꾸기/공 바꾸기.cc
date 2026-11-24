#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, a[101], i, j;
    cin >> n >> m;
    for (i = 1; i <= n; i++) a[i] = i;
    while (m--) cin >> i >> j, swap(a[i], a[j]);
    for (i = 1; i <= n; i++) cout << a[i] << ' ';
}