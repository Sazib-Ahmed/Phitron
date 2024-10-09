#include<stdio.h>

int main()
{
    int a,n;
    scanf("%d", &n);

    a=n%10;
    n/= 10;

    if((a!=0 && n%a==0) || (n!=0 && a%n==0))
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;

}