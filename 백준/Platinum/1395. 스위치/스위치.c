#include <stdio.h>

int t[400004], lz[400004];

void push(int x, int s, int e) {
    if (!lz[x]) return;
    t[x] = (e - s + 1) - t[x];
    if (s != e) {
        lz[x * 2] ^= 1;
        lz[x * 2 + 1] ^= 1;
    }
    lz[x] = 0;
}

void upd(int x, int s, int e, int l, int r) {
    push(x, s, e);
    if (r < s || e < l) return;
    if (l <= s && e <= r) {
        lz[x] ^= 1;
        push(x, s, e);
        return;
    }
    int m = (s + e) / 2;
    upd(x * 2, s, m, l, r);
    upd(x * 2 + 1, m + 1, e, l, r);
    t[x] = t[x * 2] + t[x * 2 + 1];
}

int qry(int x, int s, int e, int l, int r) {
    push(x, s, e);
    if (r < s || e < l) return 0;
    if (l <= s && e <= r) return t[x];
    int m = (s + e) / 2;
    return qry(x * 2, s, m, l, r) + qry(x * 2 + 1, m + 1, e, l, r);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    while (m--) {
        int o, a, b;
        scanf("%d %d %d", &o, &a, &b);
        if (a > b) {
            int tmp = a;
            a = b;
            b = tmp;
        }
        if (o == 0) upd(1, 1, n, a, b);
        else printf("%d\n", qry(1, 1, n, a, b));
    }
    return 0;
}