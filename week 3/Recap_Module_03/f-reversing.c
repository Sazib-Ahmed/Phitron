#include<stdio.h>

 int main() {
    int n = 0, temp;
    scanf("%d", &n);

    //taking array input
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // //just printing the array in reverse order
    // for (int i = 0, j = n-1; i < n; i++, j--) {
    //     printf("%d ", a[j]);
    // }

    //reversing the array
    for (int i = 0, j = n-1; i < n/2; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    //printing the array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
        

    return 0;
 }