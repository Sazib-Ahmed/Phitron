#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, ai, l, r;
    cin >> n >> q;
    long long int seq[n + 5] = {0};

    for (int i = 1; i <= n; i++) {
        cin >> ai;
        seq[i] = seq[i - 1] + ai;
    }
    while(q--) {
        cin >> l >> r;
        cout << seq[r] - seq[l -1] << endl;
    }
    return 0;
}

/*
https://www.hackerrank.com/contests/phitron-problem-solvers-club-final-contest-batch-6/challenges/magical-forest-1-2

Magical Forest & Fruitslocked
Problem
Submissions
Discussions
Problem Statament

In a magical forest, N trees stand in a straight line, each bearing a certain number of enchanted fruits with the power to grant wishes. The number of fruits on the i-th tree is given in an array A of size N.

A group of adventurers is planning a journey to collect fruits and needs to determine the total number of fruits available within different tree ranges. To help them, you must answer Q queries. Each query consists of two integers L and R, representing the range of trees they want to collect fruits from. Your task is to compute the total number of fruits in the range [L, R].

Input Format

The first line contains two integers N and Q:
 (number of trees)
 (number of queries)
The second line contains N integers , where , representing the number of fruits on each tree.
Each of the next Q lines contains two integers L and R (), representing a query.
Constraints

Output Format

For each query, print a single integer—the total number of fruits in the range [L, R]. Each result should be printed on a new line.

Sample Input 0

5 3
2 4 1 5 3
1 3
2 5
4 4
Sample Output 0

7
13
5
Explanation 0

Query (1,3): Trees 1 to 3 → 2 + 4 + 1 = 7
Query (2,5): Trees 2 to 5 → 4 + 1 + 5 + 3 = 13
Query (4,4): Tree 4 alone → 5

*/