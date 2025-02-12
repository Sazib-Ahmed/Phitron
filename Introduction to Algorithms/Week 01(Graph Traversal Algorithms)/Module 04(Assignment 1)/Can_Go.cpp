#include <bits/stdc++.h>
using namespace std;

int n, m;
char buildingMap[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> canWalk = {{0, -1}, {0, 1}, {-1, 0},{1, 0}};

bool can_travel(int i,int j) {
    if (i >= 0 && i < n && j < m && j >= 0) 
        return true;
    return false;
}

void dfs(int si, int sj) {

    visited[si][sj] = true;
    for (int i = 0; i < 4; i++) {
        int ci = si + canWalk[i].first;
        int cj = sj + canWalk[i].second;
        if(can_travel(ci,cj) && buildingMap[ci][cj] != '#' && !visited[ci][cj]) {
            dfs(ci, cj);
        }
        
    }
}

int main() {
    char c;
    pair<int, int> a, b;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> c;
            buildingMap[i][j] = c;
            if (c == 'A') a = {i, j};
            if (c == 'B') b = {i, j};
        }
    }

    memset(visited, false, sizeof(visited));
    dfs(a.first, a.second);
    cout << (visited[b.first][b.second] ? "YES" : "NO") << endl; 

    return 0;
}


/*
https://www.hackerrank.com/contests/assignment-01-a-introduction-to-algorithms-a-batch-06/challenges/can-go-1

Can Go?
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You are given an  sized 2D matrix that represents a map of a building. Each cell represents a wall, a floor or a room. You will be given two rooms  and . You need to tell if you can go from room  to  by passing through the floors. You can walk left, right, up, and down through the floor cells. You can't pass through walls.

Input Format

The first input line has two integers  and : the height and width of the map.
Then there are  lines of  characters describing the map. Each character is .(floor), #(wall), A or B (rooms).
Constraints

Output Format

Output YES if you can go from room  to , NO otherwise.
Sample Input 0

5 8
########
#.A#...#
#.##.#B#
#......#
########
Sample Output 0

YES*/