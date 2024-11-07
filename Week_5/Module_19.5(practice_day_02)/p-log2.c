#include <stdio.h>

void log2Flr(long long int n, int *log2) {
    // Right shift n by 1 (equivalent to dividing by 2) reduce n by factors of 2 until it reaches 1 or below.
    // int log2 = 0;
    // while (n > 1) {
    //     n >>= 1;  
    //     log2++;
    // }
    // return log2;

    //using recursion
    if (n <= 1) return;
    n >>= 1;
    (*log2)++;
    return log2Flr(n, log2);
}

int main() {
    long long int n;
    scanf("%lld", &n);

    int log2 = 0;
    log2Flr(n, &log2);
    printf("%d", log2);

    return 0;
}
/*
//more optimized
#include <stdio.h>

int log2Flr(long long int n) {
    if (n <= 1) {
        return 0;
    }
    return 1 + log2Flr(n / 2); // Recursively divide n by 2 and count the steps
}

int main() {
    long long int n;
    scanf("%lld", &n);

    int log2 = log2Flr(n);
    printf("%d", log2);

    return 0;
}

*/
/*
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

P. Log2
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print ⌊log2(N)⌋
.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤1018)
.

Output
Print the answer required above.

Examples
InputCopy
1
OutputCopy
0
InputCopy
8
OutputCopy
3
*/