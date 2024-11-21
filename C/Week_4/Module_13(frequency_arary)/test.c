//with frequency array

#include <stdio.h>

int main() {
    int n = 0, m = 0, count;
    scanf("%d %d", &n, &m);

    m++;
    int a[n], f[m];
    for (int i = 0; i < m; i++) {
        f[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        f[a[i]]++;
    }

    for (int i = 1; i < m ; i++) {
        printf("%d\n", f[i]);
    }

    return 0;
}