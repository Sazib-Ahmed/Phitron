#include<stdio.h>

int main() {
    int n, res, is_prime;
    scanf("%d", &n);

    for (int i=2; i<=n; i++) {
        is_prime=1;
        for(int j=2; j<i; j++) {
            if(i%j == 0) {
                is_prime=0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
        }
    }

    return 0;
}