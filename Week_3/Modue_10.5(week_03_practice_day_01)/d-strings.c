#include<stdio.h>

int main() {
    char a[20], b[20];
    int lenght_a = 0, lenght_b = 0, temp;
    scanf("%s\n%s", a, b);

    //counting the lenght of string a and b
    for ( lenght_a = 0; a[lenght_a] != '\0'; lenght_a++) {}
    for ( lenght_b = 0; b[lenght_b] != '\0'; lenght_b++) {}
    
    printf("%d %d\n", lenght_a, lenght_b);
    printf("%s%s\n", a, b);

    //swaping first character between the two character
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s", a, b);


    return 0;
}



/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

D. Strings
time limit per test2 seconds
memory limit per test64 megabytes
Given two strings A and B. Print three lines contain the following:

The size of the string A and size of the string B separated by a space
The string produced by concatenating A and B (A + B).
The two strings separated by a single space respectively, after swapping their first character.
For more clarification see the example below.

Input
The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.

The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.

Output
Print the answer required above.

Example
InputCopy
abcd
ef
OutputCopy
4 2
abcdef
ebcd af
*/