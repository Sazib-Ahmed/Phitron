#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        
        bool dp[100005];
        memset(dp, false, sizeof(dp));
        
        dp[1] = true;
        
        for (int i = 1; i <= n; i++) {
            if (dp[i]) {
                if (i + 3 <= n) 
                    dp[i + 3] = true;
                if (i * 2 <= n)
                    dp[i * 2] = true;
            }
        }
        
        cout << (dp[n] ? "YES" : "NO") << endl;
    }
    return 0;
}


/*
https://www.hackerrank.com/contests/final-exam-a-introduction-to-algorithms-a-batch-06/challenges/make-it-2

Make It

Problem Statement

You will be given a positive integer N. You will start from 1 and do some steps (possibly zero).

In each step you can choose one of the following:

1. Add 3 with the current value
2. Multiply by 2 with the current value
Can you tell if you can reach N by using any number of steps you want.

Input Format

First line will contain T, the number of test cases.
In each test case you will be given N.
Constraints

Output Format

1. 1 <= T <= 10^3
2. 1 <= N <= 10^5

Print "YES" if you can reach , "NO" otherwise.

Sample Input 0

5
1
3
5
15
16
Sample Output 0

YES
NO
YES
NO
YES
*/