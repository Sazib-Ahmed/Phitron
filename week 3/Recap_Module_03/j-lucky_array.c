#include<stdio.h>

int main() {
    int n = 0, min, min_index = 0, count=0;
    scanf("%d", &n);

    int a[n];
    //taking array input
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        //finding min number and storing its index number
        if (a[min_index] > a[i]) {
            min_index = i;
        }

    }

    //couning number of occurrence of the minimum element
    for (int i = 0; i < n; i++) {
        if (a[min_index] == a[i]) {
            count+=1;
        }
    }

    //the array is lucky if the frequency of the minimum element is odd else unlucky.
    if (count%2 == 0) {
        printf("Unlucky");
    }
    else {
        printf("Lucky");
    }

    return 0;
}