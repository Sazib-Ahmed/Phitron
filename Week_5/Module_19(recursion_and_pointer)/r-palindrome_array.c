#include <stdio.h>
#include <stdbool.h>


//using recursion
bool isPal(int *a, int i, int j) {
    if (i > j) return 1;
    return a[i] == a[j] && isPal(a, i + 1, j - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf(isPal(a, 0, n - 1)? "YES" : "NO");

}


/*
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R

R. Palindrome Array
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

NOTE: Solve it using recursion.

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (1 ≤ Ai ≤ 109).

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

Examples
InputCopy
5
1 3 2 3 1
OutputCopy
YES
InputCopy
4
1 2 3 4
OutputCopy
NO
*/