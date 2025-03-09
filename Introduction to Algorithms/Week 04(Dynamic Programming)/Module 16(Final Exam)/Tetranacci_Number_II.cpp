#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int tetSeq[n + 1];
    tetSeq[0] = 0, tetSeq[1] = 1, tetSeq[2] = 1, tetSeq[3] = 2;
    
    for (int i = 4; i <= n; i++)
        tetSeq[i] =  tetSeq[i - 1] + tetSeq[i - 2] + tetSeq[i - 3] + tetSeq[i - 4];
    
    cout << tetSeq[n] << endl;
    return 0;
}

/*
https://www.hackerrank.com/contests/final-exam-a-introduction-to-algorithms-a-batch-06/challenges/tetranacci-number


Tetranacci Number II
Problem
Submissions
Leaderboard
Discussions
The Tetranacci sequence is an extension of the well-known Fibonacci sequence, incorporating four previous terms instead of two.

The Tetranacci sequence Tn is defined as follows:

T0 = 0, T1 = 1, T2 = 1,T3 = 2
For  , Tn = Tn-1 + Tn-2 + Tn-3 + Tn-4
Given an integer 𝑛, return the value of Tn

Note : You must solve this problem using Loop. (Bottom up)

Input Format

A single integer n representing the position in the Tetranacci sequence.

Constraints

The result is guaranteed to fit within a 64-bit integer (  263-1 )
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

Submissions: 399
Max Score: 20
Difficulty: Medium
Rate This Challenge:

    
More


*/