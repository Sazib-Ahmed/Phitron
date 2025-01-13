#include<bits/stdc++.h>
using namespace std;

int main() {
    int t = 0;
    cin >> t;

    while (t--) {
        string s;
        stack<char> st1, st2;
        cin >> s;

        for (char c : s) {
            st1.push(c);
        }

        while (!st1.empty()) {
            st2.push(st1.top());
            st1.pop();

            while (!st1.empty() && !st2.empty() && (st1.top() == '0' && st2.top() == '1')) {
                st1.pop();
                st2.pop();
            }
        }
        cout << ((st1.empty() && st2.empty()) ? "YES" : "NO") << endl;
    }
    return 0;
}


/*
https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/elimination-2-2

Elimination
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a binary string  (A binary string is a string which contains only 0 and 1) in which every  will eliminate its previously adjacent  and itself. After an elimination, if another elimination is possible, it will continue until no further eliminations can be made.

For example, if the sequence is , then the  and  elements, as well as the  and  elements, will be eliminated, resulting in the string  (10 01 1 01 10 - Bold values are eliminated). After that, the 2nd and 3rd elements will be eliminated, resulting in the string 110 (1 01 10 - Bold values are eliminated). After that, no further eliminations can occur.

You need to determine whether the string will be empty after all eliminations.

Note: You need to solve it using STL Stack or Queue only.

Input Format

First line will contain , the number of test cases.
Each test case will contain the string .
Constraints

Output Format

For each test case output YES if the string is empty after all eliminations, NO otherwise.
Sample Input 0

7
01
10
0011
0101
01001110
000111010011
00011
Sample Output 0

YES
NO
YES
YES
NO
YES
NO
*/