#include <stdio.h>
#include <string.h>

int main() {
    char s[10005];  // Declare a string s with a maximum size of 10005 characters
    scanf("%s", s); // Read the input string
    
    int count = 0;  // Initialize a counter to track how many letters of "hello" we have found
    int length = strlen(s);  // Get the length of the input string

    // Loop through each character in the string until the second last character
    for (int i = 0; i < length; i++) {
        if (s[i] == 'h' && count == 0) {
            count += 1;  // If the character is 'h' and we are looking for the first letter, increment count
        }
        else if (s[i] == 'e' && count == 1) {
            count += 1;  // If the character is 'e' and we have found 'h', increment count
        }
        else if (s[i] == 'l' && count == 2) {
            count += 1;  // If the character is 'l' and we have found 'he', increment count
        }
        else if (s[i] == 'l' && count == 3) {
            count += 1;  // If the character is another 'l' and we have found 'hel', increment count
        }
        else if (s[i] == 'o' && count == 4) {
            count += 1;  // If the character is 'o' and we have found 'hell', increment count
        }
    }

    // If count reaches 5, that means we found all the letters in the correct order to form "hello"
    printf((count == 5) ? "YES" : "NO");

    return 0;
}


/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M

M. Subsequence String
time limit per test1 second
memory limit per test256 megabytes
Given String S
. Determine if there is a Subsequence in S
 that is equal to "hello" or not.

Note: A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.

For example: The list of all subsequence for the word "apple" would be "a", "ap", "al", "ae", "app", "apl", "ape", "ale", "appl", "appe", "aple", "apple", "p", "pp", "pl", "pe", "ppl", "ppe", "ple", "pple", "l", "le", "e".

Input
Only one line contains a string S
 (5≤|S|≤104)
 where |S| is the length of the string and it consists of lowercase English letters.

Output
Print "YES" if there exists an Subsequence equal to "hello" otherwise, print "NO".

Examples
InputCopy
ahhellllloou
OutputCopy
YES
InputCopy
hlelo
OutputCopy
NO


*/