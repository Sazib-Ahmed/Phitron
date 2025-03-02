#include <bits/stdc++.h>
using namespace std;

int n, m;
char matrix2d[1005][1005];
bool VisitedComp[1005][1005];
bool CurrVisitedComp[1005][1005];

vector<pair<int, int>> canMove = {{0, -1}, {0, 1}, {-1, 0},{1, 0}};

bool can_travel(int i,int j) {
    if (i >= 0 && i < n && j < m && j >= 0) 
        return true;
    return false;
}

void dfs(int si, int sj) {

    VisitedComp[si][sj] = true;
    CurrVisitedComp[si][sj] = true;
    for (int i = 0; i < 4; i++) {
        int ci = si + canMove[i].first;
        int cj = sj + canMove[i].second;
        if(can_travel(ci,cj) && matrix2d[ci][cj] != '-' && !VisitedComp[ci][cj]) {
            dfs(ci, cj);
        }
        
    }
}

int main() {
    bool sameComp = false;
    int s1, d1, s2, d2;
    memset(VisitedComp, false, sizeof(VisitedComp));

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix2d[i][j];
        }
    }

    cin >> s1 >> d1 >> s2 >> d2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!VisitedComp[i][j] && matrix2d[i][j] == '.') {
                memset(CurrVisitedComp, false, sizeof(CurrVisitedComp));
                dfs(i, j);
                if (CurrVisitedComp[s1][d1] && CurrVisitedComp[s2][d2]){
                    sameComp = true;
                    break;
                }
            }
        }
    }
    cout << (sameComp ? "YES" : "NO") << endl; 
    return 0;
}


/*
https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-06/challenges/same-component

Same Component
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a 2D matrix of size  which will contain only dot() and minus() where dot() means you can go in that cell and minus() means you can't.

You can move in only 4 directions (Up, Down, Left and Right).

You will be given the indexes of two cells - (,) and (,). You need to tell if these  and  cells are in the same component or not. Same component means you can go from  to .

Input Format

First line will contain  and .
Next you will be given the 2D matrix.
Next line will contain  and .
Last line will contain  and .
Constraints

Output Format

Output "YES" if those cell are in the same component, "NO" otherwise.
Sample Input 0

5 4
..-.
---.
..-.
--..
....
0 1
3 2
Sample Output 0

NO
Sample Input 1

5 4
....
---.
..-.
--..
....
0 1
3 2
Sample Output 1

YES
*/