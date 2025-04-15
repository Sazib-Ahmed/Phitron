#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005], val[1005], weight[1005];

int knapsack(int i, int maxWeight) {
    if (i < 0 || maxWeight <= 0)
        return 0;

    if (dp[i][maxWeight] != -1)
        return dp[i][maxWeight];

    if (weight[i] <= maxWeight) {
        int opt1 = knapsack(i, maxWeight - weight[i]) + val[i];
        int opt2 = knapsack(i - 1, maxWeight);
        dp[i][maxWeight] = max(opt1, opt2);
        return dp[i][maxWeight];
    }
    else {
        dp[i][maxWeight] = knapsack(i - 1, maxWeight);
        return dp[i][maxWeight];
    }

}

int main() {
    int n, maxWeight;
    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> val[i];
    for (int i = 0; i < n; i++) 
        cin >> weight[i];

    cin >> maxWeight;

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= maxWeight; j++)
            dp[i][j] = -1;
    
    cout << knapsack(n-1, maxWeight) << endl;


}