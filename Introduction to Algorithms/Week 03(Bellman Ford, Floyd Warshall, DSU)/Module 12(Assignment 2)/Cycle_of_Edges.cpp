#include <bits/stdc++.h>
using namespace std;

int par[100005];
int groupSize[100005];

int find(int node){ 
    if(par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2) {
    int leader1 = find(node1);
    int leader2 = find(node2);
    if(groupSize[leader1] >= groupSize[leader2])
    {
        par[leader2] = leader1;
        groupSize[leader1] += groupSize[leader2];
    }
    else {
        par[leader1] = leader2;
        groupSize[leader2] += groupSize[leader1];
    }
}


int main()
{
    memset(par, -1, sizeof(par));
    memset(groupSize, 1, sizeof(groupSize));

    int n, e, a, b;
    cin >> n >> e;

    int cycle = 0;
    while (e--) {
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if(leaderA == leaderB)
            cycle++;
        else    
            dsu_union(a, b);
    }

    cout << cycle << endl;

    return 0;
}



/*
Cycle of Edges
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given an undirected graph where there will be N nodes and E edges. You need to tell the number of edges that can create a cycle in the graph.

Note: Duplicate edges as input can not be possible. The value of nodes are from 1 to N.

Input Format

First line will contain N and E.
Next E lines will contain A and B which means there is a edge between A and B.
Constraints
Constraints
1. 1 ≤ N ≤ 10^5
2. 1 ≤ E ≤ 10^6
3. 1 ≤ A,B ≤ N

Output Format

Output the number of edges that can create a cycle.
Sample Input 0

5 7
1 2
2 3
3 4
4 5
4 1
2 4
5 3
Sample Output 0

3
Sample Input 1

3 3
1 2
2 3
1 3
Sample Output 1

1

*/