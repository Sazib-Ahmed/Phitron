#include <bits/stdc++.h>
using namespace std;

int n, m, area = 0;
char matrix2d[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> canMove = {{0, -1}, {0, 1}, {-1, 0},{1, 0}};

bool can_travel(int i,int j) {
    if (i >= 0 && i < n && j < m && j >= 0) 
        return true;
    return false;
}

void dfs(int si, int sj) {
    visited[si][sj] = true;
    area++;
    for (int i = 0; i < 4; i++) {
        int ci = si + canMove[i].first;
        int cj = sj + canMove[i].second;
        if(can_travel(ci,cj) && matrix2d[ci][cj] != '-' && !visited[ci][cj]) {
            dfs(ci, cj);
        }
        
    }
}

int main() {
    int minArea = INT_MAX, comp = 0;
    vector<int> areas;
    memset(visited, false, sizeof(visited));
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix2d[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            area = 0;
            if (!visited[i][j] && matrix2d[i][j] == '.') {
                dfs(i, j);
                areas.push_back(area);
                comp++;
            }
        }
    }

    if(!comp)
        cout << -1 << endl;
    else {
        for (int area : areas) {
            if (minArea > area)
                minArea = area;
        }
        cout << minArea << endl;
    }
    return 0;
}

/*
https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-06/challenges/area-of-component

Area of Component
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a 2D matrix of size  which will contain only dot(.) and minus(-) where dot(.) means you can go in that cell and minus(-) means you can't.

You can move in only 4 directions (Up, Down, Left and Right).

The area of a component is the number of dots(.) in that component that can be accessible. You need to tell the minimum area of all available components.

Note: If there are no components, print -1.

Input Format

First line will contain  and .
Next you will be given the 2D matrix.
Constraints

Output Format

Output the minimum area.
Sample Input 0

6 5
..-..
..-..
-----
.-...
.----
.....
Sample Output 0

3
Sample Input 1

3 3
---
---
---
Sample Output 1

-1
*/