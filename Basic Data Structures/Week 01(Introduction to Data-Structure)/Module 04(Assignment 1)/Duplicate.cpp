#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>

using namespace std;

int main()
{
    int n;
    bool flag = false;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    
    for(int i = 0; i < n - 1; i++){
        if(a[i] == a[i + 1]){
            flag = true;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}





// int main()
// {
//     int n;
//     bool flag = false;
//     cin >> n;
//     vector<int> a(n);

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
    
//     for(int i = 0; i < n; i++){
//         int l = 0, r = n - 1;
//         int count = 0, cur_el = a[i];
//         while(l < r){
//             int mid = (l + r)/2;
//             if(cur_el == a[mid] ) count++;
//             else if(cur_el < a[mid]){
//                 r = mid - 1;
//             }
//             else if(cur_el > a[mid]){
//                 l = mid + 1;
//             }
//         }

//         if(count > 1){
//             flag = true;
//             break;
//         }
//     }

//     cout << (flag ? "YES" : "NO") << endl;
//     return 0;
// }




// int main()
// {
//     int n;
//     bool flag = false;
//     cin >> n;
//     vector<int> a(n);

//     vector<int> freq(100005, 0);
//     int max_el = 0;

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//         if(a[i] > i) max_el = a[i];
//         freq[a[i]]++;
//     }

//     for(int i = 0; i <= max_el; i++){
//         if(freq[i] > 1){
//             flag = true;
//             break;
//         }
//     }

//     cout << (flag ? "YES" : "NO") << endl;
//     return 0;
// }



//========================================================================
/*
Duplicate
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.

Input Format

First line will contain N.
Second line will contain the array A.
Constraints

1 <= N <= 100000
0 <= A[i] <= 10^9; Where 0 <= i < N
Output Format

Output "YES" or "NO" without the quotation marks according to the problem statement.
Sample Input 0

5
1 2 3 4 5
Sample Output 0

NO
Sample Input 1

6
2 1 3 5 2 1 
Sample Output 1

YES

*/