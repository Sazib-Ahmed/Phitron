#include <stdio.h>

int main() {

    int n=0;
    scanf("%d", &n);

    int arr[n];

    printf("The Array: ");

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]);
    }
    printf("\nLen = %d", n);


    int min=arr[0], max=arr[0];

    for(int i=0; i<n; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }

        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    printf("\nMin = %d \nMax = %d", min, max);

    long long int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=(long long int) arr[i];
    }

    printf("\nSum = %d", sum);

    double avg;
    avg = (double) sum / n;

    printf("\nAvg = %0.2lf", avg);

    return 0;
}
