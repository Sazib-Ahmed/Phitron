#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
    

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);

    printf("%d %d", x, y);
    return 0;
}


/*
https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E

E. Swap
time limit per test1 second
memory limit per test64 megabytes
Given two numbers X and Y. Print X and Y after swapping them.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print X and Y separated by a space after swapping.

Example
InputCopy
5 2
OutputCopy
2 5

*/