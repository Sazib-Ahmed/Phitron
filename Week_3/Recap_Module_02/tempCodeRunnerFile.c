#include<stdio.h>
#include<math.h>

int main() {
    int x, res, is_prime=1;
    scanf("%d", &x);

    // if (x <= 1) {
    //     printf("No\n");
    //     return 0;
    // }

    for(int i=2; i<=sqrt(x); i++) {
        if(x%i == 0) {
            is_prime=0;
            break;
        }
    }

    if(is_prime) {
        printf("No");
    }
    else {
        printf("Yes");
    }

    return 0;
}