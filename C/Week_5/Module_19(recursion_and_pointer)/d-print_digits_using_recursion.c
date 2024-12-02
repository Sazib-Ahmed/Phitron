#include <stdio.h>

void printDigits(int n) {
    if(n < 1) return;

    int digit = n % 10;
    n /= 10;
    
    printDigits(n);
    printf("%d ", digit);
}

int main() {
    int t, n;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        if (n == 0) printf("%d ", n);
        else printDigits(n);
        printf("\n");
    }
    return 0;
}

/*
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

D. Print Digits using Recursion
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print the digits of N separated by a space.

Note: Solve this problem using recursion.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109).

Output
For each test case print a single line contains the digits of the number separated by space.

Example
InputCopy
3
121
39
123456
OutputCopy
1 2 1 
3 9 
1 2 3 4 5 6 
*/