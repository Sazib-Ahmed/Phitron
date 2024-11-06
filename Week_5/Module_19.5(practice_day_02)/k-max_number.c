#include <stdio.h>

int findMax(int *a, int n, int max) {
    if (n == 0) return max;
    if ( a[n - 1] > max) max = a[n - 1];
    return findMax(a, n - 1, max);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    max = findMax(a, n, max);
    printf("%d", max);

    return 0;
}


/*
K. Max Number
time limit per test1 second
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the maximum value in this array.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the maximum value in this array.

Example
InputCopy
5
1 -3 5 4 -6
OutputCopy
5
*/