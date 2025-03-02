#include <stdio.h>

int main() {
    int n = 0, m = 0, x, is_exists = 0;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(x == a[i][j]) {
                is_exists++;
                break;
            }
        }
    }

    printf((is_exists) ? "will not take number" : "will take number");

    return 0;
}


/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S


S. Search In Matrix
time limit per test2 seconds
memory limit per test64 megabytes
Given two numbers N and M, a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.

Input
First line contains two numbers N, M (2 ≤ N, M ≤ 100) N donates number of rows and M donates number of columns.

Each of the next N lines will contain M numbers (1 ≤ Ai ≤ 105).

Last line contains a number X (0 ≤ X ≤ 105) described above.

Output
Print "will take number" if the number doesn't exist in the 2D array otherwise, print "will not take number".

Examples
InputCopy
2 2
1 2
3 4
3
OutputCopy
will not take number
InputCopy
2 2
1 2
3 4
10
OutputCopy
will take number


*/