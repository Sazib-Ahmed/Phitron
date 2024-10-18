#include<stdio.h>

int main() {
    int n=0, el;
    scanf("%d", &n);
    int a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &el);
        a[i]=el;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] <= 10) {
            printf("A[%d] = %d\n", i, a[i]);
        }
    }
    return 0;
}