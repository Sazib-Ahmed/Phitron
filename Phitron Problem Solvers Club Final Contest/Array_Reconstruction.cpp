#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, ai;
    cin >> t;

    while (t--) {
        long long int n, sumBefore ,sumAfter = 0, diff;
        cin >> n;

        for (int i = 0; i < n - 2; i++) {
            cin >> ai;
            sumAfter += ai; 
        }

        cin >> sumBefore;
        diff = sumBefore - sumAfter;

        cout << ++diff << endl;
    }
    return 0;
}


/*
https://www.hackerrank.com/contests/phitron-problem-solvers-club-final-contest-batch-6/challenges/array-reconstruction

Array Reconstruction
Problem
Submissions
Discussions
Problem Statement

Dablu recently starts learning programming. Today he learns about array. While working with an array he accidently deleted two non-negative elements from that array. The array has n elements. But fortunately he has the sum of the main array (before deleting the two elements).

Now he is wondering how many ways he can put two elements (0 <= element <= 10^18) to that array so that the sum of both versions of the array remain same. For example if the main array a = [5,3,1,4,2] and after losing two elements (3 and 1), a = [5,4,2]. The previous sum was 15 and the current sum is 11 (after losing two elements). He can put (0,4), (2,2),(3,1), (4,0) and (1,3) so that the sum doesn't get change. So here 5 ways are possible.

Now you have to help Dablu to figure out the number of ways possible to reconstruct the array.

Input Format

First line of input contains an integer t, number of test cases.
First line of each test case contains an integer n the number of elements in the array before deleting.
Second line of each testcase consists n-2 integers, the remaining elements of the array.
Third line of each testcases consists an integer, the sum of the main array.
Constraints
1 ≤ T ≤ 1000
3 ≤ n ≤ 2*10^5 
0 ≤ ai ≤ 10^5 
1 ≤ sum ≤ 10^18 
 (But there is no guarantee that the missing two values will be from this range)
Summation of n over all test cases doesn't exceed 2*10^5 
Output Format

For each test case output an integer,the number of ways possible to reconstruct the array so that the sum remains same. Don't forget to print a newline after each test case.

Sample Input 0

3
5
5 4 2
15
6
0 4 3 1
15
3
0
100000000
Sample Output 0

5
8
100000001
*/