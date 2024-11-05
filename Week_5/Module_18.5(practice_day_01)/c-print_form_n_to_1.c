#include<stdio.h>

void print_rec(int n) {
    if(n < 1) {
        return;
    }
    printf("%d", n);

    //To avoid trailing spaces printing space only if there is more number to print.
    if (n > 1) {
        printf(" ");
    }
    print_rec(--n);
}

int main() {
    int n;
    scanf("%d", &n);

    print_rec(n);
    return 0;
}

/*
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

C. Print from N to 1
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print from N to 1 separated by a single space.

Example
InputCopy
4
OutputCopy
4 3 2 1
Note
Make sure don't print any leading or trailing spaces.



*/