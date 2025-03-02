#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int nodeA, nodeB;
    long long weight;
    Edge(int nodeA, int nodeB, long long weight) {
        this->nodeA = nodeA;
        this->nodeB = nodeB;
        this->weight = weight;
    }
};

long long dis[1005];

int main() {
    int node, e, source, testCase, destination;
    cin >> node >> e;
    bool negCycle = false;

    vector<Edge> edgeList;
    while (e--) {
        int nodeA, nodeB;
        long long weight;
        cin >> nodeA >> nodeB >> weight;
        edgeList.push_back(Edge(nodeA, nodeB, weight));
    }

    cin >> source;

    for (int i = 1; i <= node; i++)
        dis[i] = LLONG_MAX;
    
    dis[source] = 0;

    for (int i = 1; i < node; i++) {
        for (auto ed : edgeList) {
            int a = ed.nodeA, b = ed.nodeB; 
            long long w = ed.weight;
            if (dis[a] != LLONG_MAX && dis[a] + w < dis[b]) {
                dis[b] = dis[a] + w;
            }
        }
    }

    for (auto ed : edgeList) {
        int a = ed.nodeA, b = ed.nodeB;
        long long w = ed.weight;
        if (dis[a] != LLONG_MAX && dis[a] + w < dis[b]) {
            negCycle = true;
            break;
        }
    }

    if (negCycle)
        cout << "Negative Cycle Detected" << endl;
    else {
        cin >> testCase;
        while (testCase--) {
            cin >> destination;
            if (dis[destination] == LLONG_MAX || destination > node )
                cout << "Not Possible" << endl;
            else
                cout << dis[destination] << endl;
        }
    }
    return 0;
}


/*
Can Go Again?
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given N  numbers of nodes, E numbers of edges in a graph. For each edge you will be given A, B  and W which means there is a connection from A to B only and for which you need to give W cost. The value of nodes could be from 1 to N.

You will be given a source node S. Then you will be given a test case T, for each test case you will be given a destination node D. You need to tell the minimum cost from source node to destination. If there is no possible path from S to D then print Not Possible.

Note: If there is a negative weight cycle in the graph, then no answer would be correct. So print one line only - "Negative Cycle Detected".

Input Format

First line will contain N and E.
Next  lines will contain A, B and W.
Next line will contain source node S.
Next line will contain T, the number of test cases.
For each test case, you will get D.
Constraints
1. 1 ≤ N ≤ 10^3
2. 1 ≤ E ≤ 10^6
3. 1 ≤ S ≤ N
4. 1 ≤ T ≤ 10^3
5. 1 ≤ D ≤ N
6. -10^9 ≤ W ≤ 10^9

Output Format

Output the minimum cost for each test case.

Sample Input 0

5 7
1 2 10
1 3 -2
3 2 1
2 4 7
3 4 -3
4 5 5
2 5 2
1
5
1
2
3
4
5
Sample Output 0

0
-1
-2
-5
0
Sample Input 1

5 7
1 2 10
1 3 -2
3 2 1
2 4 7
3 4 -3
4 5 5
2 5 2
5
5
1
2
3
4
5
Sample Output 1

Not Possible
Not Possible
Not Possible
Not Possible
0
Sample Input 2

5 8
1 2 -2
1 3 -10
3 2 1
2 4 7
4 3 -3
4 5 5
2 5 2
4 1 1
1
5
1
2
3
4
5
Sample Output 2

Negative Cycle Detected
*/