#include <stdio.h>
#include <stdlib.h>
//using pointers

int main() {
    int n = 0;
    scanf("%d", &n);

    //int a[n];
    // Dynamically allocate memory for the array
    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL) { // Check for successful allocation
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (*(a + i) > 0) {
            *(a + i) = 1;
        }
        else if (*(a + i) < 0) {
            *(a + i) = 2;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C


C. Replacement
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the array after the replacement and it's values separated by space.

Example
InputCopy
5
1 -2 0 3 4
OutputCopy
1 2 0 1 1 


*/