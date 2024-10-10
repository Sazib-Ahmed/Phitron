#include<stdio.h>

//Without Array

int main()
{
    int n, a;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a);
        if(a>0){
            a=1;
        }
        else if(a<0){
            a=2;
        }
        else{
            a=0;
        }
        printf("%d ", a);
    }
    return 0;
}