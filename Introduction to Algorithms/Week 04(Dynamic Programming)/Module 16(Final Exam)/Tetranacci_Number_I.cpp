#include <bits/stdc++.h>
using namespace std;

int dp[35];

int tetranacci(int n){
    if (dp[n] != -1)
        return dp[n];
    else if (n < 2)
        return n;
    else if (n < 4)
        return n - 1;

    dp[n] = tetranacci(n - 1) + tetranacci(n - 2) + tetranacci(n - 3) + tetranacci(n - 4);
    return dp[n];
}

int main() {
    int n;
    memset(dp, -1, sizeof(dp));
    cin >> n;
    
    cout << tetranacci(n) << endl;
    return 0;
}

/*
https://www.hackerrank.com/contests/final-exam-a-introduction-to-algorithms-a-batch-06/challenges/tetranacci-number-a-easy-version

Tetranacci Number I
Problem
Submissions
Leaderboard
Discussions
The Tetranacci sequence is an extension of the well-known Fibonacci sequence, incorporating four previous terms instead of two.

The Tetranacci sequence Tn is defined as follows:

T0 = 0, T1 = 1, T2 = 1,T3 = 2
For  , Tn = Tn-1 + Tn-2 + Tn-3 + Tn-4
Given an integer 𝑛, return the value of Tn

Note : You must solve this problem using Recursion. (Top Down)

Input Format

A single integer n representing the position in the Tetranacci sequence.

Constraints

The result is guaranteed to fit within a 32-bit integer (  231-1 )
Output Format

Print a single integer, the value of Tn

Sample Input 0

4
Sample Output 0

4
Explanation 0

image

Sample Input 1

5
Sample Output 1

8
Explanation 1

image

Submissions: 404
Max Score: 20
Difficulty: Easy
Rate This Challenge:

    
More


*/