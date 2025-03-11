#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005], values[1005] , weights[1005];

int knapsack(int i, int max_w) {
    if (i < 0) 
        return 0;

    if (dp[i][max_w] != -1) 
        return dp[i][max_w];
    else if(weights[i] <= max_w) {
        int op1 = knapsack(i - 1, max_w - weights[i]) + values[i];
        int op2 = knapsack(i - 1, max_w);
        dp[i][max_w] = max(op1 , op2);
    }
    else {
        dp[i][max_w] = knapsack(i - 1, max_w);
    }

    return dp[i][max_w];
}

int main() {
    int t;
    cin >> t;
    while (t--){
        memset(dp, -1, sizeof(dp));
        memset(values, 0, sizeof(values));
        memset(weights, 0, sizeof(weights));
        int n, max_w;
        cin >> n >> max_w;
        for (int i = 0; i < n; i++)
            cin >> weights[i];
        for (int i = 0; i < n; i++)
            cin >> values[i];

        cout << knapsack(n-1, max_w) << endl;
    }
    return 0;
}


/*
Adventure

Problem Statement

Once upon a time, there was a treasure hunter who ventured into an ancient temple in search of a valuable artifact. The temple was filled with traps and obstacles, and the treasure hunter had to carry all of his equipment with him.

The treasure hunter had a backpack with a limited weight capacity, and he could only carry a certain amount of equipment with him. Each piece of equipment had its own weight and value, and the treasure hunter needed to choose which items to bring to maximize the total value while keeping the total weight under the limit.

Help the treasure hunter to choose which items to bring in his backpack to maximize their total value while keeping the total weight of his backpack under a certain limit. Each item can only be included once.

Input Format

First line will contain T, the number of test cases.
The first line of each test case will contain N(Number of items) and W(Total weight of backpack).
Second line of each test case will contain an array w containing the weights of all items.
Third line of each test case will contain an array v containting the values of all items.

Constraints
1. 1 <= T <= 10^3
2. 1 <= N <= 10^3
3. 0 <= W <= 10^3
4. 0 <= wi <= 10^3; Here 0 <= i <= N
5. 0 <= vi <= 10^3; Here 0 <= i <= N

Output Format

Output the maximum total value you can obtain in the backpack for each test case.
Sample Input 0

2
4 7
2 3 4 5
4 7 6 5
4 17
10 1 6 9
6 10 10 8

Sample Output 0

13
28
Explanation 0

In the first test case case, he can take 2nd and 3rd item which total weight is 3+4=7 and total value is 7+6=13 and its the maximum value possible.

*/