#include <bits/stdc++.h>
using namespace std;
int weights[25], values[25], dp[25][105];

int knapsack(int i, int w_max) {
    if(i < 0)
        return 0;

    if (dp[i][w_max] != -1)
        return dp[i][w_max];

    if(weights[i] <= w_max) {
        int op1 = knapsack(i - 1, w_max - weights[i]) + values[i];
        int op2 = knapsack(i - 1, w_max);
        dp[i][w_max] = max(op1 , op2);
    }
    else {
        dp[i][w_max] = knapsack(i - 1, w_max);
    }

    return dp[i][w_max];
}

int main() {
    int n, w_max;
    memset(dp, -1, sizeof(dp));
    cin >> n >> w_max;

    for (int i = 0; i < n; i++) {
        cin >> weights[i] >> values[i];
    }

    cout << knapsack(n-1, w_max) << endl;
    return 0;
}


/*
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U

U. Knapsack
time limit per test2 seconds
memory limit per test256 megabytes
There are N
 items numbered from 1 to N
. The ith
 item has a weight of wi
 and a value of vi
.

You have to choose some items out of the N
 items and carry them home in a knapsack. The capacity of the knapsack is W
 which donate the maximum weight that can be carried inside the knapsack. In other words, W
 means the total summation of all weights of items that can be carried in the knapsack.

Print maximum possible sum of values of items that you can take home.

Note: Solve this problem using recursion.

Input
First line contains two numbers N
 and W
 (1≤N≤20,1≤W≤100)
 number of items and the capacity of the knapsack.

Next N
 lines will contain two numbers wi
 and vi
 (1≤wi≤50,1≤vi≤1000)

Output
Print maximum possible sum of values of items that you can take home.

Examples
InputCopy
3 8
3 30
4 50
5 60
OutputCopy
90
InputCopy
6 15
6 5
5 6
6 4
6 6
3 5
7 2
OutputCopy
17
*/