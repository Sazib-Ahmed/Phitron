#include<stdio.h>

int main() {
    char s[1010];
    int length = 0, is_pal = 1;
    //fgets(s, sizeof(s), stdin);
    scanf("%s", s);
    
    for (length = 0; s[length] != '\0'; length++) {
        //printf("%d %c\n", length, s[length]);
    }
    //printf("\n\n%d\n", length);

    for (int i = 0, j = length - 1; i <= j; i++, j--) {
    //printf("%d %d\n", i, j);    
    if (s[i] != s[j]) {
            is_pal = 0;
        }
    }

    if (is_pal) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    //fputs(s, stdout);

    return 0;
}



/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

I. Palindrome
time limit per test1 second
memory limit per test256 megabytes
Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

Input
Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

Output
Print "YES" if the string is palindrome, otherwise print "NO".

Examples
InputCopy
abba
OutputCopy
YES
InputCopy
icpcassiut
OutputCopy
NO
InputCopy
mam
OutputCopy
YES
*/