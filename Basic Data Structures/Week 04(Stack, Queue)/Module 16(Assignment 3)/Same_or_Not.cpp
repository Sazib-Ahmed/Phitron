#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0, m = 0, el;
    bool isSame = true;
    stack<int> stA;
    queue<int> quB;

    cin >> n >> m;

    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }

    while (n--) {
        cin >> el;
        stA.push(el);
    }

    while (m--) {
        cin >> el;
        quB.push(el);
    }

    while (!stA.empty()) {
        int stEl = stA.top();
        int quEl = quB.front();
        if (stEl != quEl) {
            isSame = false;
            break;
        }
        stA.pop();
        quB.pop();
    }

    cout << (isSame ? "YES" : "NO") << endl;
    return 0;
}


/*
//https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/same-or-not-ii


Same or Not
Problem
Submissions
Leaderboard
Discussions
Problem Statement

There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You need to solve it using  Stack and Queue only.

Input Format

First line will contain  and .
Second line will contain stack  with  values.
Third line will contain queue  with  values.
Constraints

Output Format

Output YES if they were same, otherwise NO.
Sample Input 0

5 5
10 20 30 40 50
50 40 30 20 10
Sample Output 0

YES
Sample Input 1

4 4
10 20 30 40
10 20 30 40
Sample Output 1

NO
Sample Input 2

5 4
1 2 3 4 5
5 4 3 2
Sample Output 2

NO
*/