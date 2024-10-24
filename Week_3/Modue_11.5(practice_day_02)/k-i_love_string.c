#include <stdio.h>
#include <string.h>

int main() {
    char s[55], t[55]; // Declare two strings s and t with maximum length of 54 characters + 1 for null-terminator
    int n = 0;         // Variable to store the number of test cases
    scanf("%d", &n);   // Read the number of test cases

    // Loop through each test case
    for (int i = 0; i < n; i++) {
        // Read two strings s and t
        scanf("%s %s", s, t);

        char cat_str[110];   // Declare a string large enough to store the combined result of s and t
        int cat_index = 0;   // Index to keep track of the position in cat_str
        int len_s = strlen(s), len_t = strlen(t);  // Calculate the lengths of strings s and t

        // Loop to interleave characters from s and t
        for (int j = 0; j < len_s || j < len_t; j++) {
            // If j is within the length of s, add s[j] to cat_str
            if (j < len_s) {
                cat_str[cat_index++] = s[j];
            }
            // If j is within the length of t, add t[j] to cat_str
            if (j < len_t) {
                cat_str[cat_index++] = t[j];
            }
        }
        // Null-terminate the concatenated string
        cat_str[cat_index] = '\0';

        // Print the interleaved string
        printf("%s\n", cat_str);
    }

    return 0;
}




/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

K. I Love strings
time limit per test2 seconds
memory limit per test64 megabytes
Given two strings S and T. Print a new string that contains the following:

The first letter of the string S followed by the first letter of the string T.
the second letter of the string S followed by the second letter of the string T.
and so on...
In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

Input
The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.

Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.

Output
For each test case, print the required string.

Example
InputCopy
2
ipAsu ccsit
ey gpt
OutputCopy
icpcAssiut
egypt
*/