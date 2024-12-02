#include <stdio.h>

void asc_order(int *a, int *b, int *c) {
    if(*a > *b) {
        int temp = *a;    
        *a = *b;
        *b = temp;
    }
    if(*a > *c) {
        int temp = *a;
        *a = *c;
        *c = temp; 
    }
    if(*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    asc_order(&a, &b, &c);
    printf("%d %d", a, c);
    return 0;
}

/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

K. Max and Min
time limit per test0.25 seconds
memory limit per test64 megabytes
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.

Examples
InputCopy
1 2 3
OutputCopy
1 3
InputCopy
-1 -2 -3
OutputCopy
-3 -1
InputCopy
10 20 -5
OutputCopy
-5 20

*/