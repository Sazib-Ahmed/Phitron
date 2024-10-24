#include <stdio.h>
#include <string.h>

int main() {
    char x[25], y[25];
    scanf("%s\n%s", x, y);

    //comparing x and y lexicographical value
    int cmp_value = strcmp(x, y);
    // similar to vlaue = a - b

    //if less than 0, x is smaller. if greater than 0, y is smaller. if equal to 0, both has same size.
    if (cmp_value < 0) {
        printf("%s", x);
    }
    else {
        printf("%s", y);
    }

    return 0;
}



/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

C. Compare
time limit per test1 second
memory limit per test256 megabytes
Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.

Example
InputCopy
acm
acpc
OutputCopy
acm
Note
For more information visit Lexicographical order: https://en.wikipedia.org/wiki/Lexicographical_order
*/