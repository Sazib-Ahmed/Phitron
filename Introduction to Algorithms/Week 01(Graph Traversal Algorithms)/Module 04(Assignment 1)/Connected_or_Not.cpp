#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e, a, b, q;
    cin >> n >> e;
    vector<int> adjList[n];

    while (e--) {
        cin >> a >> b;
        adjList[a].push_back(b);
    }

    cin >> q;
    while (q--) {
        cin >> a >> b;
        if(a >= n || b >= n) {
            cout << "NO" << endl;
            continue;
        }
        bool isConnected = false;
        if(a == b) {
            isConnected = true;
        } else {
            for(int node : adjList[a]) {
                if(node == b) {
                    isConnected = true;
                    break;
                }
            }
        }
        cout << (isConnected ? "YES" : "NO") << endl; 
    }
    return 0;
}

/*
https://www.hackerrank.com/contests/assignment-01-a-introduction-to-algorithms-a-batch-06/challenges/connected-or-not-1-1


Connected or Not
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a directed graph as input. Then you will receive  queries. For each query, you will be given two nodes,  and . You need to determine whether you can go from  to  directly without using any other nodes.

Input Format

The first line will contain  and , the number of nodes and the number of edges, respectively. The values of the nodes range from  to .
Next  lines will contain two node values which means there is a connection from first node to second node.
The next line will contain .
The following  lines will each contain  and .
Constraints

Output Format

For each query output YES if it is possible to go from  to  directly without using any other nodes, NO otherwise. Don't forget to put a new line after each query.
Sample Input 0

5 6
0 1
1 2
2 3
3 4
1 4
0 2
10
0 1
1 0
2 2
2 3
0 3
3 0
1 4
4 1
4 3
1 2
Sample Output 0

YES
NO
YES
YES
NO
NO
YES
NO
NO
YES

*/