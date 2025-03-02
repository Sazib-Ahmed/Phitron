#include <bits/stdc++.h>
using namespace std;

int n, m;
char maze2d[1005][1005];
bool visited[1005][1005];
int level[1005][1005];
pair<int, int> par[1005][1005];

vector<pair<int, int>> canMove = {{0, 1}, {0 , -1}, {-1, 0},{1, 0}};

bool can_travel(int i,int j) {
    return (i >= 0 && i < n && j < m && j >= 0);
}

void bfs(int si, int sj) {
    queue<pair<int, int>> qu;
    qu.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;
    par[si][sj] = {-1, -1};
    
    while(!qu.empty()) {
        pair<int, int> parent = qu.front();
        qu.pop();
        int parent_i = parent.first;
        int parent_j = parent.second;

        for (int i = 0; i < 4; i++) {
            int child_i = parent_i + canMove[i].first;
            int child_j = parent_j + canMove[i].second;

            if (can_travel(child_i, child_j) && !visited[child_i][child_j] && maze2d[child_i][child_j] != '#') {
                qu.push({child_i, child_j});
                visited[child_i][child_j] = true;
                level[child_i][child_j] = level[parent_i][parent_j] + 1;
                par[child_i][child_j] = {parent_i, parent_j};
            }
        }
    }
}

int main() {
    int ri, rj, di, dj;
    char block;
    vector<int> areas;
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> block;
            maze2d[i][j] = block;
            if (block == 'R') {
                ri = i;
                rj = j;
            }
            else if (block == 'D') {
                di = i;
                dj = j;
            }
        }
    }

    bfs(ri, rj);

    if (visited[di][dj]) {
        int ci = di, cj = dj;
        while (!(ci == ri && cj == rj)) {
            if (maze2d[ci][cj] == '.')
                maze2d[ci][cj] = 'X';
            pair<int, int> p = par[ci][cj];
            ci = p.first;
            cj = p.second;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << maze2d[i][j];
        }
        cout << endl;
    }

    return 0;
}

/*
https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-06/challenges/maze-19

Maze
Problem
Submissions
Leaderboard
Discussions
Problem Statement

Rezia is trapped in a 2D maze of  size, starting at position R, and her goal is to reach the exit marked by D. The maze contains blocks represented by #, and she can only traverse through cells marked with dots (.). As she need to escape as early as possible, we need to determine the path she will follow.

Place an X in each cell representing Rezia's route to exit the maze. If there is no viable path for her to exit, leave the maze unchanged.

Note: Rezia can move in four directions – right, left, up, and down. It is crucial to adhere to the specified order: attempting right first, then left, followed by up, and finally down.

Input Format

First line will contain  and .
Next you will be given the 2D matrix.
Constraints

Output Format

Output the final maze with marked X indicating the path she will follow.
Sample Input 0

5 6
...D.#
.##..#
....#.
.R#...
.#.##.
Sample Output 0

...D.#
.##X.#
.XXX#.
.R#...
.#.##.
Sample Input 1

5 6
...D.#
.R...#
....#.
..#...
.#.##.
Sample Output 1

...D.#
.RXX.#
....#.
..#...
.#.##.
Sample Input 2

5 6
...D.#
.....#
.##.#.
.R#...
.#.##.
Sample Output 2

...D.#
XXXX.#
X##.#.
XR#...
.#.##.
Sample Input 3

5 6
...D.#
.....#
###.#.
.R#...
.#.##.
Sample Output 3

...D.#
.....#
###.#.
.R#...
.#.##.
*/