#include<stdio.h>

int main() {
    int n = 0, min, max, min_index = 0, max_index = 0;
    scanf("%d", &n);

    int a[n];
    //taking array input
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    //let first index max and min
    min = a[0];
    max = a[0];
    //finding min and max in the array
    for (int i = 1; i < n; i++) {
        //finding min and stroing its index
        if (min > a[i]) {
            min = a[i];
            min_index = i;
        }
        //finding max and storing its index
        if (max < a[i]) {
            max = a[i];
            max_index = i;
        }
    }

    // swaping max and min
    a[min_index] = max;
    a[max_index] = min;

    //printing the array after swaping
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}




// more optimized

/*
#include <stdio.h>

int main() {
    int n, min_index = 0, max_index = 0;
    scanf("%d", &n);

    int a[n];

    // Reading the array and finding min and max in a single loop
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        // Update min and min_index
        if (a[i] < a[min_index]) {
            min_index = i;
        }

        // Update max and max_index
        if (a[i] > a[max_index]) {
            max_index = i;
        }
    }

    // Swap the values at min_index and max_index
    int temp = a[min_index];
    a[min_index] = a[max_index];
    a[max_index] = temp;

    // Output the array after swapping
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
*/