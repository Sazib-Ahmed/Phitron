#include<stdio.h>
#include<limits.h>

//Without Array

int main()
{
    int n, a, pos=1, min=INT_MAX;
    scanf("%d", &n);

    //int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a);
        //arr[i]=a;
        //if(arr[i]<min){
        if(a<min){
            //min=arr[i];
            min=a;
            pos=i+1;
        }
    }
    printf("%d %d", min, pos);

    return 0;
}