#include<stdio.h>

int main() {
    int a, b, num, lucky, flag_is_lucky, flag_any_lucky = 0;
    scanf("%d %d", &a, &b);

    if (a>b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i=a; i<=b; i++) {
        num = i;
        flag_is_lucky = 1;
        
        while(num != 0) {
            lucky = num % 10;
            if(lucky != 4 && lucky != 7) {
                flag_is_lucky = 0;
                break;
            }
            num /= 10;
        }

        if(flag_is_lucky) {
            printf("%d ", i);
            flag_any_lucky = 1;
        }
    }

    if(!flag_any_lucky) {
        printf("-1");
    }

    return 0;
}