#include<stdio.h>

int main() {
    int t=0, x, y;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++) {
        long long int sum=0;
        scanf("%d %d", &x, &y);
        if(x>y) {
            int temp=x;
            x=y;
            y=temp;
        }

        for (int j=x+1; j<y; j++) {
            if (j%2 != 0) {
                sum+=(long long int)j;
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}