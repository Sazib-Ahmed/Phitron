#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;
    while (t--) {
        string s; 
        char pre = '?';

        cin >> s;
        for (char c: s) {
            if ( c >= 'a' && c <= 'z') {
                pre = c;
            }
            else if ( c >= '0' && c <= '9' && pre != '?') {
                int count = c - '0';
                for (int i = 0; i < count; i++)
                    cout << pre;
                pre = '?';
            }
        }
        cout << endl;
    }
    return 0;
}

/*
https://www.hackerrank.com/contests/phitron-problem-solvers-club-final-contest-batch-6/challenges/string-decoder-1-1

String Decoderlocked
Problem
Submissions
Discussions
Problem Statament

A special String Decoder that can decode strings encoded with a unique pattern. The encoding rule is as follows:

The string consists of lowercase English letters ('a'–'z').
Each letter is always followed by a single-digit number (0-9), which represents how many times that character should appear in the decoded string.
If a character is followed by 0, it is completely removed from the decoded string.
For example:

"a2b3c1" is decoded as "aabbbc".
"x1y0z2" is decoded as "xzz" (since 'y' appears 0 times, it is removed).
Your task is to implement the magical string decoder and decode a given encoded string.

Note - It is guaranteed that the resultant string will not be empty.

Input Format

The first line contains an integer T (), the number of test cases.
Each of the next T lines contains a single string S (), representing an encoded string.
Constraints

Summation of  over all test cases doesn't exceed 
Output Format

For each test case, print the decoded string on a new line.

Sample Input 0

2
a2b3c1
x1y0z2
Sample Output 0

aabbbc
xzz
Submissions: 393
Max Score: 1
Rate This Challenge:

    
More

*/