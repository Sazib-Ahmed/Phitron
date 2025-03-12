#include <bits/stdc++.h>
using namespace std;

int md, n;
int v[1005];

void dfs(int i, int s1, int s2, int c1, int c2) {
    if(i == n) {
        int half = n / 2;
        if(c1 == half && c2 == n - half)
            md = min(md, abs(s1 - s2));
        return;
    }
    dfs(i + 1, s1 + v[i], s2, c1 + 1, c2);
    dfs(i + 1, s1, s2 + v[i], c1, c2 + 1);
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> v[i];
        md = INT_MAX;
        dfs(0, 0, 0, 0, 0);
        cout << md << endl;
    }
    return 0;
}


/*Mina & Moni
Problem
Submissions
Discussions
Problem Statement

Mina and Moni are two sisters who share a deep bond of love, and they extend this love even to their food. They have a habit of splitting everything equally between them. One fine day, their father gave them a total of N coins and asked them to divide it amongst themselves. However, there's a twist - the coins they received are not of equal value; they can have different denominations. This presents a challenge because there is no guarantee that they can divide the coins equally.

So, Mina and Moni devised a plan to divide the coins in a way that minimizes the difference between the sums of the coins they receive. They agreed that each of them should get N/2 coins (if N is even). In case N is odd, one of them will receive an extra coin. However, they are not sure how to execute this plan efficiently. Can you help them achieve their goal?

For example: Let's consider a scenario where their father gives them 8 coins with the following denominations: 23, 45, 34, 12, 0, 3, 1, and 4. They can divide these coins among themselves in the following manner:

Mina: 45, 12, 3, 1
Moni: 23, 34, 0, 4
In this division, both Mina and Moni receive subsets of equal size, each containing 4 coins. Remarkably, the sum of coins in both parts is identical, amounting to 61 for each of them. Consequently, the minimum difference in the sum of coins between the two parts is 0.

This example illustrates their strategy for dividing the coins, ensuring that the difference in the sum of coins is minimized.

Input Format

First line will contain an integer T, the number of test cases.
For each test case, the first line will contain an integer N - number of coins need to be divided.
For each test case, the second line will contain the value (Ei) of the coins.
Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 15
0 ≤ Ei ≤ 1000
Output Format

For each test case, output a single line - the minimum difference described in the statement.

Sample Input 0

3
8
23 45 34 12 0 3 1 4
5
10 20 30 40 50
4
1 2 3 10
Sample Output 0

0
10
6
Explanation 0

The first test case was explained in the problem statement. For the second test case, one possible answer is Mina takes {10,30,40} and Moni takes {20,50}. For the third test case, one possible answer is Mina take {1,10} and Moni takes {2,3}*/