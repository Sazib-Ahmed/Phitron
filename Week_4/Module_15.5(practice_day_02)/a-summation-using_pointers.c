#include <stdio.h>
#include <stdlib.h>
//using pointers

long long int sum(int *a, int n) {
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (long long int)*(a + i);
    }
    return llabs(sum);
}
int main() {
    int n = 0;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long int result = sum(a, n);
    printf("%lld", result);

}

/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A


A. Summation
time limit per test2 seconds
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

absolute value : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (-109  ≤  Ai  ≤  109).

Output
Print the absolute summation of these numbers.

Examples
InputCopy
4
7 2 1 3
OutputCopy
13
InputCopy
3
-1 2 -3
OutputCopy
2
Note
Second Example :

-1 + 2 + -3 = -2 and it absolute is 2 so the answer is 2.
*/