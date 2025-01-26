#include <bits/stdc++.h>
using namespace std;



int main() 
{
    int n = 0, q = 0, cmd, x;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> a;

    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push(x);
    }

    cin >> q;
    while (q--) {
        cin >> cmd;
        if (cmd == 0) {
            cin >> x;
            a.push(x);
            cout << a.top() << endl;
        }
        else if (cmd == 1) {
            if(!a.empty()) 
                cout << a.top() << endl;
            else 
                cout << "Empty" << endl;
        }
        else if (cmd == 2) {
            if(!a.empty()) 
                a.pop();
            if(!a.empty()) 
                cout << a.top() << endl;
            else 
                cout << "Empty" << endl;
        }
    }
    return 0;
}

/*
https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-06/challenges/give-max-min

Give Current Min
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a list  of size . Then you will be given  queries, for each query there will be some commands. Commands are given below -

  -> Insert  into the list. Then print the current minimum value from the list.
 -> Print the current minimum value from the list.
 -> Delete the current minimum value from the list and print the minimum value from the list after deletion.
Note: If the list is empty and you can't print anything then you should print "Empty".

Input Format

First line will contain .
Second line will contain the list  of size .
Third line will contain .
Next  lines will contain the commands.
Constraints

 ; Here  means the values of the list .
Output Format

For each command, print as asked from the list.
Sample Input 0

4
10 -10 -5 -20
10
1
2
2
2
2
0 10
1
2
0 20
1
Sample Output 0

-20
-10
-5
10
Empty
10
10
Empty
20
20
Sample Input 1

6
45 -30 83 -99 19 75 
9
1
2
2
0 32
0 6
2
2
0 -86
1
Sample Output 1

-99
-30
19
19
6
19
32
-86
-86
*/