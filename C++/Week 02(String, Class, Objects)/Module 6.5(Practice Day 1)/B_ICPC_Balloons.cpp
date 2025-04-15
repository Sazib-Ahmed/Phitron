#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int len, balloon = 0, solveFlag[26] = {0};
        string s;
        cin >> len >> s;

        for (char c : s) {
            if (solveFlag[c - 'A'] == 0) {
                balloon += 2;
                solveFlag[c - 'A']++;
            }
            else {
                balloon += 1;
                solveFlag[c - 'A']++;
            }
        }
        cout << balloon << endl;
    }
    return 0;
}

/*
B. ICPC Balloons
time limit per test1 second
memory limit per test256 megabytes
In an ICPC contest, balloons are distributed as follows:

Whenever a team solves a problem, that team gets a balloon.
The first team to solve a problem gets an additional balloon.
A contest has 26 problems, labelled A
, B
, C
, ..., Z
. You are given the order of solved problems in the contest, denoted as a string s
, where the i
-th character indicates that the problem si
 has been solved by some team. No team will solve the same problem twice.
Determine the total number of balloons that the teams received. Note that some problems may be solved by none of the teams.

Input
The first line of the input contains an integer t
 (1≤t≤100
) — the number of testcases.

The first line of each test case contains an integer n
 (1≤n≤50
) — the length of the string.

The second line of each test case contains a string s
 of length n
 consisting of uppercase English letters, denoting the order of solved problems.

Output
For each test case, output a single integer — the total number of balloons that the teams received.

Example
InputCopy
6
3
ABA
1
A
3
ORZ
5
BAAAA
4
BKPT
10
CODEFORCES
OutputCopy
5
2
6
7
8
17
Note
In the first test case, 5
 balloons are given out:

Problem A
 is solved. That team receives 2
 balloons: one because they solved the problem, an an additional one because they are the first team to solve problem A
.
Problem B
 is solved. That team receives 2
 balloons: one because they solved the problem, an an additional one because they are the first team to solve problem B
.
Problem A
 is solved. That team receives only 1
 balloon, because they solved the problem. Note that they don't get an additional balloon because they are not the first team to solve problem A
.
The total number of balloons given out is 2+2+1=5
.
In the second test case, there is only one problem solved. The team who solved it receives 2
 balloons: one because they solved the problem, an an additional one because they are the first team to solve problem A
.





*/