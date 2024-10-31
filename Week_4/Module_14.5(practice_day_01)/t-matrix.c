#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int a[n][n], pri_diag = 0, sec_diag = 0, sum;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (i == j) {
                pri_diag += a[i][j];
            }
            if (i + j == n - 1) {
                sec_diag += a[i][j];
            }
        }
    }

    printf("%d", abs(pri_diag - sec_diag));

    return 0;
}


/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

T. Matrix
time limit per test1 second
memory limit per test256 megabytes
Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

Input
First line contains a number N (1 ≤ N ≤ 100) described above.

Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

Output
Print the absolute difference between the summation of the matrix main diagonals.

Example
InputCopy
4
1 5 12 1
2 -4 6 7
3 8 5 9
3 5 23 -6
OutputCopy
22
Note
First Example :



*/