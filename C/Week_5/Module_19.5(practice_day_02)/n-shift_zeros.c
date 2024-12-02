#include <stdio.h>

void shiftZeros(int *a, int n) {
    for (int i = 0, k = n - 1; i < n && i <= k; i++) {
        if(a[i] == 0) {
            for ( int j = i; j <= k; j++) {
                a[j] = a[j + 1];
            }
            i--;
            k--;
            a[n - 1] = 0;
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

    shiftZeros(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

/*
\\More optimized
#include <stdio.h>

void shiftZeros(int *a, int n) {
    int position = 0; // Track where to place the next non-zero element

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[position++] = a[i];
        }
    }

    // Fill the rest with zeros
    for (int i = position; i < n; i++) {
        a[i] = 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    shiftZeros(a, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

*/
/*
https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N

N. Shift Zeros
time limit per test1 second
memory limit per test256 megabytes
Given an array A
 of size N
. Print the array elements after shifting all zeroes in array A
 to the right.

Note: Solve this problem using function.

Input
First line will contain a number N
 (1≤N≤103)
 number of elements.

Second line will contain N
 numbers (0≤Ai≤103)
.

Output
Print the array after shifting right all its zeros.

Examples
InputCopy
4
2 0 0 5
OutputCopy
2 5 0 0 
InputCopy
5
1 5 0 7 4
OutputCopy
1 5 7 4 0 
*/