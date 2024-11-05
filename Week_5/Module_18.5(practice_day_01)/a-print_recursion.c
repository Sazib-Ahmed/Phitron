#include<stdio.h>

void print_rec(int n) {
    if(n < 1) {
        return;
    }
    print_rec(--n);
    printf("I love Recursion\n");
}

int main() {
    int n;
    scanf("%d", &n);

    print_rec(n);
    return 0;
}

/*
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A


A. Print Recursion
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print "I love Recursion" N
 times.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤100)
 .

Output
Print "I love Recursion" N
 times.

Example
InputCopy
3
OutputCopy
I love Recursion
I love Recursion
I love Recursion


*/