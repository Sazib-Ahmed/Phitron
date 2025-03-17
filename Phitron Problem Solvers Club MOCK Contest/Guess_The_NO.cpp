#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cout << (t >= 6 || t == 3 || t == 4 ? "YES" : "NO") << endl;
    return 0;
}

/*
Guess The NO!!!
Problem
Submissions
Discussions
Problem Statement

You are given a target integer T. Initially, you start with a variable S=0. In each step, you can add either 3 or 4 to S. Your task is to determine whether it is possible to reach the target T by performing a series of such additions.

Input Format

A single integer T, representing the target sum.

Constraints
1 =< t <= 10^9

Output Format

Print "YES" if it is possible to reach the target T by adding 3 or 4 in each step.
Print "NO" otherwise.
Sample Input 0

10
Sample Output 0

YES
Explanation 0

Start with S=0.
Add 3: S=0+3=3.
Add 4: S=3+4=7.
Add 3: S=7+3=10.
The target T=10 is achieved.
Sample Input 1

2
Sample Output 1

NO
*/