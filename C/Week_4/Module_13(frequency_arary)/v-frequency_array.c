//with frequency array

#include <stdio.h>

int main() {
    int n = 0, m = 0, count;
    scanf("%d %d", &n, &m);

    m++;
    int a[n], f[m];
    for (int i = 0; i < m; i++) {
        f[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        f[a[i]]++;
    }

    for (int i = 1; i < m ; i++) {
        printf("%d\n", f[i]);
    }

    return 0;
}


/*
//without frequency array

#include <stdio.h>

int main() {
    int n = 0, m = 0, count;
    scanf("%d %d", &n, &m);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }


    for (int i = 1; i <= m; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i) {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
*/

/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

V. Frequency Array
time limit per test1 second
memory limit per test256 megabytes
Given 2 numbers N
, M
 and an array A
 of N
 numbers. For every number from 1 to M
, print how many times this number appears in this array.

Input
First line contains two numbers N
, M
 (1≤N≤105,1≤M≤105)
.

Second line contains N
 numbers (1≤Ai≤M)
.

Output
Print M
 lines, the ith
 line should contain number of times that the number i
 appears in A

Example
InputCopy
10 5
1 2 3 4 5 3 2 1 5 3
OutputCopy
2
2
3
1
2
Note
Numbers from 1 to 5 appearance are :

1 appears 2 times in the array .
2 appears 2 times in the array.
3 appears 3 times in the array.
4 appears once in the array.
5 appears 2 times in the array.

*/