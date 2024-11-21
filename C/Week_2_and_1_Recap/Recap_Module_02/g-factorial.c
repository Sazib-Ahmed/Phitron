#include<stdio.h>

int main() {
    int t=0, n; 
    long long int factorial;
    scanf("%d", &t);

    for (int i=0; i<t; i++) {
        scanf("%d", &n);
        factorial=1;
        for (int j=n; j>0; j--) {
            factorial*=j;
        }
        printf("%lld\n", factorial);
    }

    return 0;
}