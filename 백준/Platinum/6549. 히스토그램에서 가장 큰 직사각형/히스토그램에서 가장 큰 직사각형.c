#include <stdio.h>

long long h[100005];
int s[100005];

int main() {
    int n;
    while (scanf("%d", &n) && n) {
        for (int i = 0; i < n; i++) scanf("%lld", &h[i]);
        int top = -1;
        long long ans = 0;
        for (int i = 0; i <= n; i++) {
            long long cur = (i == n) ? 0 : h[i];
            while (top >= 0 && h[s[top]] >= cur) {
                long long hei = h[s[top--]];
                long long wid = (top < 0) ? i : (i - s[top] - 1);
                long long area = hei * wid;
                if (area > ans) ans = area;
            }
            s[++top] = i;
        }
        printf("%lld\n", ans);
    }
    return 0;
}