#include<stdio.h>
//using pointer
int add(int *x, int *y) {
    int sum = *x + *y;
    return sum;
}

int main() {
    int x, y;//, sum;
    scanf("%d %d", &x, &y);

    int *a = &x, *b = &y;
    int sum = add(a, b);

    printf("%d", sum);
    return 0;
}

/*
https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

A. Add
time limit per test1 second
memory limit per test64 megabytes
Given two numbers X and Y, Print their summation.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print the summation value.

Example
InputCopy
5 2
OutputCopy
7


*/