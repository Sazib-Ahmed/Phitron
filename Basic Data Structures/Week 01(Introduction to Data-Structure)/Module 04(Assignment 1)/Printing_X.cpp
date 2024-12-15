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

int main(){
    int n;
    cin >> n;

    for(int i = 1, j = n; i < j; i++, j--){
        for(int k = 1; k <= n; k++){
            if(i==k) cout << "\\";
            else if(j==k) { 
                cout << "/" << endl;
                break;
            }
            else cout << ' ';
        }
    }

    for(int i = 1; i <= n/2; i++) {
        cout << ' ';
    }
    cout << 'X' << endl;

    // for(int i = n, j = 1; i > j; i--, j++){
    //     for(int k = 1; k <= n; k++){
    //         if(i/2==k) cout << "/";
    //         else if(i-j==k) { 
    //             cout << "\\" << endl;
    //             break;
    //         }
    //         else cout << ' ';
    //     }
    // }

    for (int i = n / 2; i > 0; i--) {
        for (int k = 1; k <= n; k++) {
            if (k == i) {
                cout << "/";
            } else if (k == n - i + 1) {
                cout << "\\" << endl;
                break;
            } else {
                cout << " ";
            }
        }
    }




            // for(int l = 1; l < i; l++){
            //     cout << ' ';
            // }
            // cout << "\\";
            // for(int l = j; l > 0; l--){
            //     cout << ' ';
            // }
            // cout << "/" << endl;

        // for(int j = 0; j < i; j++){
        //     cout << ' ';
        // }
        // cout << "\\";
        // for(int j = n-i; j > 0; j--){
        //     cout << ' ';
        // }
        // cout << "/" << endl;


    // for(int i = 0; i < n/2; i++){
    //     for(int j = 0; j < i; j++){
    //         cout << ' ';
    //     }
    //     cout << "\\";
    //     for(int j = n-i; j > 0; j--){
    //         cout << ' ';
    //     }
    //     cout << "/" << endl;
    // }

    // for(int i = n/2; i > 0; i--){
    //     for(int j = i; j > 0; j--){
    //         cout << ' ';
    //     }
    //     cout << "\\";
    // }

    return 0;
}


//========================================================================
/*
Printing X
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given an positive odd integer N, you need to print the pattern for it. See sample input and output for understanding the pattern.

Input Format

Input will contain only N.
Constraints

1 <= N <= 20 and N is odd.
Output Format

Output the pattern.
Sample Input 0

5
Sample Output 0

\   /
 \ / 
  X  
 / \ 
/   \
Sample Input 1

7
Sample Output 1

\     /
 \   / 
  \ /  
   X   
  / \  
 /   \ 
/     \
Sample Input 2

3
Sample Output 2

\ /
 X 
/ \
Sample Input 3

1
Sample Output 3

X

*/