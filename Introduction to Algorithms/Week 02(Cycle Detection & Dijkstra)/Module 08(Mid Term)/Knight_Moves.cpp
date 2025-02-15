#include <bits/stdc++.h>
using namespace std;

int n, m;
bool visited[105][105];
int level[105][105];

vector<pair<int, int>> canMove = {
    {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}
};

bool can_travel(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int si, int sj) {
    queue<pair<int, int>> qu;
    qu.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;
    
    while(!qu.empty()) {
        pair<int, int> parent = qu.front();
        qu.pop();
        int parent_i = parent.first;
        int parent_j = parent.second;
        
        for (int i = 0; i < 8; i++) {
            int child_i = parent_i + canMove[i].first;
            int child_j = parent_j + canMove[i].second;
            
            if (can_travel(child_i, child_j) && !visited[child_i][child_j]) {
                qu.push({child_i, child_j});
                visited[child_i][child_j] = true;
                level[child_i][child_j] = level[parent_i][parent_j] + 1;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        cin >> n >> m;
        
        int ki, kj, qi, qj;
        cin >> ki >> kj;
        cin >> qi >> qj;
        
        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));
        
        bfs(ki, kj);
        
        if (visited[qi][qj])
            cout << level[qi][qj] << endl;
        else
            cout << -1 << endl;
    }
    
    return 0;
}


/*
https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-06/challenges/knight-moves-2
Knight Moves
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a chessboard of  size. You can move anywhere in the chessboard freely. You will be given two cells - the knight's cell  ( and ), and the queen's cell  ( and ). You need to tell the minimum number of steps for the knight to attack the queen if the queen doesn't move.

A knight move in 8 directions. The directions are given below:image

Input Format

First line will contain , the number of test cases.
First line of each test case will contain  and .
Second line of each test case will contain  and .
Third line of each test case will contain  and .
Constraints

Output Format

Output the minimum number of steps for the knight to reach the queen. If you can't reach to queen, print .
Sample Input 0

4
8 8
0 0
7 7
5 6
0 1
0 1
4 4
0 0
0 1
2 2
0 0
0 1
Sample Output 0

6
0
3
-1
Explanation 0

For the first test case, one of the possible answer could be this way:


*/