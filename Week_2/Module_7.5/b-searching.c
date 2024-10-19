#include<stdio.h>

int main()
{
    int n,a,x,res=0;
    scanf("%d", &n);

    //taking input array
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        arr[i]=a;
    }
    scanf("%d", &x);

    //searching in the array
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            res=i;
            break;
        }
        else{
            res=-1;
        }
    }
    printf("%d", res);
    return 0;
}