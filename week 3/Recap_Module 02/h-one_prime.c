#include<stdio.h>

int main() {
    int x, res, is_prime=1;
    scanf("%d", &x);

    if (x <= 1) {
        printf("NO");
        return 0;
    }

    for(int i=2; i<x; i++) {
        if(x%i == 0) {
            is_prime=0;
            break;
        }
    }

    if(is_prime) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}