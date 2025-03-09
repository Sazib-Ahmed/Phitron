#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        cout << (s1 == s2 ? "YES" : "NO") << endl;
    }
    return 0;
}


/*
https://www.hackerrank.com/contests/final-exam-a-introduction-to-algorithms-a-batch-06/challenges/pile-of-word-37-3


Pile of Word

Problem Statement

Pile of Word is a word formed by rearranging the letters of another word, using all the original letters exactly once. In other words, it involves creating a new word by rearranging the characters of a given word. It is possible that after rearranging it looks like the original one.

You will be given two strings S1 and S2. You need to determine if the strings are Pile of Word of each other.

Input Format

First line will contain T, the number of test cases.
Each line of the test case will contain S1 and S2  separated by a space. The string will contain Enlish small alphabets only.
Constraints
1. 1 <= T <= 10^3
2. 1 <= |S1|,|S2| <= 10^4. Here || means the length of string.
Output Format

Ouptut YES  if the strings are Pile of Word to each other, NO otherwise.
Sample Input 0

4
eat tea
madam madam
ball all
ant tan
Sample Output 0

YES
YES
NO
YES

*/