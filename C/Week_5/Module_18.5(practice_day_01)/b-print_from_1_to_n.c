#include<stdio.h>

int i = 1;

void print_rec(int n) {
    if(i > n) {
        return;
    }
    printf("%d\n", i++);
    print_rec(n);
}

int main() {
    int n;
    scanf("%d", &n);

    print_rec(n);
    return 0;
}

// more optimezed
/*
#include<stdio.h>

void print_rec(int n) {
    if (n == 0) {   // Base case: if n reaches 0, stop recursion
        return;
    }
    print_rec(n - 1);   // Recursive call with n - 1
    printf("%d\n", n);  // Print the current value of n after the recursive call
}

int main() {
    int n;
    scanf("%d", &n);

    print_rec(n);   // Start recursion
    return 0;
}

*/

/*
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

B. Print from 1 to N
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above.

Example
InputCopy
5
OutputCopy
1
2
3
4
5



*/