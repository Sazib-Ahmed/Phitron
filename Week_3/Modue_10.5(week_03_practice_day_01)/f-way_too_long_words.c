#include <stdio.h>

int main() {
    int n = 0, length;
    char s[110];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        
        //using for loop to count the lenght.
        for (length = 0; s[length] != '\0'; length++) {
        }

        if (length > 10) {
            printf("%c%d%c\n", s[0], length-2, s[length-1]);
        }
        else {
            printf("%s\n", s);
        }
    }
    return 0;
}


/*
F. Way Too Long Words
time limit per test1 second
memory limit per test256 megabytes
Given a string S. Print the origin string if it's not too long otherwise, print the special abbreviation.

Note: The string is called too long, if its length is strictly more than 10 characters. If the string is too long then you have to print the string in the following manner:

Print the first character in the string.
Print number of characters between the first and the last characters.
Print the last character in the string.
For example: "localization" will be "l10n", and "internationalization" will be "i18n".

Input
The first line contains a number T (1 ≤ T ≤ 100) number of test cases.

Each of the T following lines contains a string S (1 ≤ |S| ≤ 100) where |S| is the length of the string.

It's guaranteed that S contains only lowercase Latin letters.

Output
For each test case, print the result string.

Example
InputCopy
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
OutputCopy
word
l10n
i18n
p43s

*/