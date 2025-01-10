// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// #include <map>
// #include <set>
// #include <queue>
// #include <stack>
// #include <cmath>
// #include <cstdio>
// #include <cstdlib>
// #include <cstring>
// #include <climits>

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

            while (!st1.empty() && !st2.empty() && (st1.top() != st2.top())) {
                st1.pop();
                st2.pop();
            }
        }
        cout << (st2.empty() ? "YES" : "NO") << endl;
    }
    return 0;
}


/*
https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/is-it-valid-1-1

Is It Valid
Problem
Submissions
Leaderboard
Discussions
Problem Statement

Given a string  containing just the characters  and , determine if the input string is valid.

An input string is valid if the string is empty after doing some operatios. The available operations are:

 can delete its previous available character  along with itself. If there is no  available to delete, it will not delete itself.
 can delete its previous available character  along with itself. If there is no  available to delete, it will not delete itself.
Note: You need to solve it using STL Stack or Queue only.

Input Format

First line will contain , the number of test cases.
Next  lines will contain the string .
Constraints

. Here  means the length of the string.
Output Format

Output YES if the string is valid, otherwise NO.
Sample Input 0

10
0011
1010
1100
0101
0001
0111
0110
100101
1110010
0001011011
Sample Output 0

YES
YES
YES
YES
NO
NO
YES
YES
NO
YES
Submissions: 209
Max Score: 20
Difficulty: Easy
Rate This Challenge:

    
More

*/