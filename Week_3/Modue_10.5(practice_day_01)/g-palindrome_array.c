#include<stdio.h>

int main() {
    int n = 0, is_pal = 1;
    scanf("%d", &n);

    int a[n];
    //taking arry input
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // for (int i = 0; i < n; i++) {
    //     printf("%d ", a[i]);
    // }

    //comparing every element form first to middle with last to middle to check if the array is palindrome.  
    for (int i = 0, j = n-1; i <= j; i++, j--) {
        //printf("\n%d %d\n", a[i], a[j]);
        if (a[i] != a[j]) {
            is_pal = 0;
            break;
        }
    }
    
    if (is_pal) {
        printf("YES");
    }
    else {
        printf("NO");
    }
 
    return 0;
}


/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

G. Conversion
time limit per test2 seconds
memory limit per test64 megabytes
Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
Input
Only one line contains a string S (1 ≤ |S| ≤ 105) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.

Output
Print the string after the conversion.

Example
InputCopy
happy,NewYear,enjoy
OutputCopy
HAPPY nEWyEAR ENJOY

*/