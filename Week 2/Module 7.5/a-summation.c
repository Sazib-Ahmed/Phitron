#include<stdio.h>

int main(){
    int n=0, a;
    long long int sum=0;
    scanf("%d", &n);

    //Taking input array
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        arr[i]=a;
    }

    //Calculating sum of the array
    for(int i=0; i<n; i++){
        sum+= arr[i];

    }
    
    //Changing the absolute value
    if(sum<0){
        printf("%lld", -sum);
    }
    else{
        printf("%lld", sum);
    }
    return 0;
}