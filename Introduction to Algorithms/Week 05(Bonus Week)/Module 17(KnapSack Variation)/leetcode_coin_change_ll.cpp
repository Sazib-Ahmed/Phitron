#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int dp[305][5005];

    int numOfCom(int i, int amount, vector<int>& coins) {
        if (amount == 0)
            return 1;

        if (i < 0)
            return 0;

        if (dp[i][amount] != -1)
            return dp[i][amount];
            
        if (coins[i] <= amount) {
            int opt1 = numOfCom(i, amount - coins[i], coins);
            int opt2 = numOfCom(i - 1, amount, coins);
            dp[i][amount] = opt1 + opt2;
            return dp[i][amount];
        }
        else {
            dp[i][amount] = numOfCom(i - 1, amount, coins);
            return dp[i][amount];
        }
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= amount; j++)
                dp[i][j] = -1;
        return numOfCom(n - 1, amount, coins);    
    }
};

/*518. Coin Change II
Solved
Medium
Topics
Companies
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.

You may assume that you have an infinite number of each kind of coin.

The answer is guaranteed to fit into a signed 32-bit integer.

 

Example 1:

Input: amount = 5, coins = [1,2,5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1
Example 2:

Input: amount = 3, coins = [2]
Output: 0
Explanation: the amount of 3 cannot be made up just with coins of 2.
Example 3:

Input: amount = 10, coins = [10]
Output: 1
 

Constraints:

1 <= coins.length <= 300
1 <= coins[i] <= 5000
All the values of coins are unique.
0 <= amount <= 5000*/