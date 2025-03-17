#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        string s;
        char c1, c2, c3;
        cin >> s >> c1 >> c2 >> c3; 
        long long int count1 = 0, count2 = 0, count3 = 0;
        
        for (char ch : s) {
            if (ch == c3)
                count3 += count2;
            if (ch == c2)
                count2 += count1;
            if (ch == c1)
                count1++;
        }
        cout << count3 << endl; 
    }
    return 0;
}


/*
https://www.hackerrank.com/contests/phitron-problem-solvers-club-final-contest-batch-6/challenges/help-hablu-1

Help Hablu!!!
Problem
Submissions
Discussions
Problem Statament

In an enchanted forest, there lies a magical book filled with ancient symbols, represented by the string s. Hidden deep within its pages Hablu discovers a secret ancient spell, represented by the string t which consists of exactly 3 letters. To unlock the spell's power, Hablu needs to find out how many times the spell t appears as a subsequence in the magical book s. Can you help Hablu?

A subsequence of a string is a string made from the original string by deleting some characters (can be none) without changing the relative order of the remaining characters. For example, the subsequences of "abc" include "a", "b", "c", "ab", "ac", "bc", and "abc".

Input Format

First line contains a single integer T — the number of test cases.
First line of each test case contains the string s consisting of lowercase letters of the English alphabet.
The second line of each test case contains the string t consisting of lowercase letters of the English alphabet.
Constraints
1 <= T <= 10^4
1 <= |s| <= 3*10^5
|t| = 3
Summation of |s| over all test cases doesn't exceed 3*10^5
Output Format

For each test cases, output a single integer — the number of times  occurs as a subsequence of s.

Sample Input 0

4
ababcc
abc
effkbd
bad
phiphihhitron
phi
fykklopjplloopre
kop
Sample Output 0

6
0
11
10
Explanation 0

For the first test, we need to count how many times the string t = abc occurs as a subsequence in the string s = ababcc.

Let's find all the subsequences of  that match :

Subsequence: a (position 1), b (position 2), c (position 5).
Subsequence: a (position 1), b (position 2), c (position 6).
Subsequence: a (position 1), b (position 4), c (position 5).
Subsequence: a (position 1), b (position 4), c (position 6).
Subsequence: a (position 3), b (position 4), c (position 5).
Subsequence: a (position 3), b (position 4), c (position 6).
So, the string t = abc  appears 6 times as a subsequence in the string s = ababcc. Therefore, the output is 6.
*/