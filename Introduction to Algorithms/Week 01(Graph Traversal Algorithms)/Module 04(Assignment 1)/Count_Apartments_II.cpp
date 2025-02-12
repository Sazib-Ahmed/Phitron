#include <bits/stdc++.h>
using namespace std;

int n, m;
int room = 0;
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
    room++;

    for (int i = 0; i < 4; i++) {
        int ci = si + canWalk[i].first;
        int cj = sj + canWalk[i].second;
        if(can_travel(ci,cj) && buildingMap[ci][cj] != '#' && !visited[ci][cj]) {
            dfs(ci, cj);
        }
        
    }
}

int main() {
    int apartment = 0;
    vector<int> rooms;
    memset(visited, false, sizeof(visited));
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> buildingMap[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            room = 0;
            if (!visited[i][j] && buildingMap[i][j] == '.') {
                dfs(i, j);
                rooms.push_back(room);
                apartment++;
            }
        }
    }

    if(!apartment)
        cout << 0 << endl;
    else {
        sort(rooms.begin(), rooms.end());
        for (int room : rooms) 
            cout << room << ' ';
    }

    return 0;
}


/*
https://www.hackerrank.com/contests/assignment-01-a-introduction-to-algorithms-a-batch-06/challenges/count-apartments-ii

Count Apartments II
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You are given an  sized 2D matrix that represents a map of a building. Each cell represents a wall or a room. The connected rooms are called apartments. Your task is to count the number rooms in each of the apartments in that building. You can walk left, right, up, and down through the room cells. You can't pass through walls.

You need to print the count of the rooms in ascending order. If there are no apartments available in that building, then you should print .

Input Format

The first input line has two integers  and : the height and width of the map.
Then there are  lines of  characters describing the map. Each character is either .(room) or #(wall).
Constraints

Output Format

Output the number of rooms in each of the apartments in ascending order.
Sample Input 0

5 8
########
#..#...#
####.#.#
#..#...#
########
Sample Output 0

2 2 8
Sample Input 1

6 8
.#.#####
.#.###..
#..#...#
#.##....
..##.###
#.#.##.#
Sample Output 1

1 1 2 8 10
*/