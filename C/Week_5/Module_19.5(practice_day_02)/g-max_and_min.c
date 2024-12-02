#include <stdio.h>

void maxMin(int *a, int n, int *maxmin) {
    *(maxmin) = *(maxmin + 1) = *a; // Initialize both max and min to the first element
    for (int i = 1; i < n; i++) {
        if (maxmin[0] < *(a + i)) {
            maxmin[0] = *(a + i);
        }
        if (maxmin[1] > *(a + i)) {
            maxmin[1] = *(a + i);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int maxmin[2]; // let index 0 = max and index 1 = min
    maxMin(a, n, maxmin);
    printf("%d %d", maxmin[1], maxmin[0]);

    return 0;
}

/*
https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G

Max and Min (Function)
Send the array to a function to find max and min.
Use functions to find max and min of two values


G. Max and MIN
time limit per test1 second
memory limit per test64 megabytes
Given an array A of size N. Print the minimum and the maximum number in the array.

Note: Solve this problem using function.

Input
First line will contain a number N (1 ≤ N ≤ 103) number of elements.

Second line will contain N numbers (0 ≤ Xi ≤ 105).

Output
Print the minimum and the maximum number separated by a space.

Example
InputCopy
5
10 13 95 1 3
OutputCopy
1 95

*/