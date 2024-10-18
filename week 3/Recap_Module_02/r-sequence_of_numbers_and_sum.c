#include<stdio.h>

int main() {
    int n, m, sum, temp;

    while (scanf("%d %d", &n, &m) != EOF) {
        if (n < 1 || m < 1) {
            break;
        }
        sum = 0;
        if (n > m) {
            temp = n;
            n = m;
            m = temp;
        }
        
        for (int i = n; i <= m; i++) {
            sum += i;
            printf("%d ", i);
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}