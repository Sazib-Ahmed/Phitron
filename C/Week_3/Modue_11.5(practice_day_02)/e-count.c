#include <stdio.h>

int main() {
    char s[1000005]; // Declare a character array (string) to hold the input string
    scanf("%s", s);  // Read a string from standard input

    int sum = 0;     // Variable to store the sum of digits
    int length = 0;  // Variable to keep track of the length of the string

    // Loop through the string until we reach the null character ('\0'), which marks the end of the string
    for (int length = 0; s[length] != '\0'; length++) {
        // Convert each character to its corresponding integer value (subtract 48 because '0' is 48 in ASCII)
        sum += s[length] - 48;
    }

    // Print the sum of the digits in the string
    printf("%d", sum);

    return 0;
}



/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

E. Count
time limit per test2 seconds
memory limit per test64 megabytes
Given a string S. Print the summation of its digits.

Input
Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

It's guaranteed that S contains only digits from 0 to 9.

Output
Print the answer required above.

Example
InputCopy
351
OutputCopy
9
Note
First Test :

3 + 5 + 1 = 9 .
*/