#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 2; i<n; i+=2)
    {
        printf("%d\n", i);
    }

    if(n%2==0)
    {
        printf("%d", n);
    }

    if(n==1)
    {
        printf("%d", -1);
    }

}