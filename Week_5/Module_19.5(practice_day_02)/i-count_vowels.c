#include <stdio.h> 
#include <stdbool.h>
#include <string.h>

bool checkVowel(char l){
    return (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u'||
            l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U');
}

int countVowel(char *s, int n, int count) {
    if (n < 0) return count;
    if (checkVowel(s[n - 1]) == true) count ++;
    return countVowel(s, n - 1, count);

}

int main() {
    char s[205];
    fgets(s, sizeof(s), stdin);
    //scanf("%s", s);

    int n = strlen(s);
    int count = 0;
    count = countVowel(s, n, count);
    printf("%d", count);
}

/*
//More optimized

#include <stdio.h> 
#include <stdbool.h>
#include <string.h>

bool checkVowel(char l) {
    return l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' ||
           l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U';
}

int countVowel(char *s, int n) {
    if (n < 0) return 0;
    return checkVowel(s[n - 1]) + countVowel(s, n - 1);
}

int main() {
    char s[205];
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);
    printf("%d", countVowel(s, n));
    return 0;
}

*/
/*
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

I. Count Vowels
time limit per test1 second
memory limit per test256 megabytes
Given a string S. Print number of vowels in the string.

Note:

Vowel letters: ['a', 'e', 'i', 'o', 'u'].
Vowel letters could be capital or small.
Solve this problem using recursion.
Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S.

Example
InputCopy
Data Structure Lab
OutputCopy
6


*/