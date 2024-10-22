#include<stdio.h>

int main() {
    char s[1000000];
    fgets(s, sizeof(s), stdin);
    //scanf("%s", &s);
    for (int i = 0; s[i] != '\0'; i++) {
        //printf("%d", i);
        if (s[i] == ',') {
            s[i] = ' ';
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32; //('a'-'A');
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') { 
            s[i] = s[i] + 32; //('a'-'A');
         }
    }

    fputs(s, stdout);
    //printf("%s", s);

    return 0;
}


/*
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