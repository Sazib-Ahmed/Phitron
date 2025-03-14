#include <bits/stdc++.h>
using namespace std;

long long int calSum(long long int x) {
    if (x == 0) return 0;
    long long int m = x / 3;
    long long int sum = 3 * m * (m + 1) / 2;
    sum += (x % 3) * (m + 1);
    return sum;
}

int main() {
    long long int n, q;
    cin >> n >> q;

    while (q--) {
        long long int l, r;
        cin >> l >> r;
        cout << calSum(r) - calSum(l - 1) << endl;
    }

    return 0;
}

/*
https://www.hackerrank.com/contests/phitron-problem-solvers-club-final-contest-batch-6/challenges/pain-sum
Problem Statement

There is a sequence of length , the property of the sequence is -

 and  is a multiple of 3.
Sorted in non-decreasing order.
Each element appears exactly thrice from  to .
You are given the value  and you are also given  queries, where each query consists of two integers  and . For each query, you need to find the sum of the elements in the sequence from position  to .

Note: A multiple of 3 is any integer that can be expressed as 3k, where k is an integer. For example: 3,6,9,12,15 etc. are all multiples of 3.

Input Format

The first line will contain a single positive integer  and  , the length of the sequence and the number of queries respectively.
Next  lines will contain  and .
Constraints

Output Format

For each query find the sum of the elements in the sequence from position  to . Don't forget to print a newline after each query.

Sample Input 0

9 3
2 9
2 6
7 9
Sample Output 0

17
8
9
Explanation 0

In the given test case N = 9 . So the sequence will be [1,1,1,2,2,2,3,3,3]. Now for first query  and . It represents the values [1,1,2,2,2,3,3,3] which belongs from the position  to  (considering 1-base indexing) and hence the sum of 1+1+2+2+2+3+3+3 = 17 for the first query.*/