#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, times;
    char c;
    cin >> t;

    while (t--) {
        cin >> times >> c;
        while (times --) {
            cout << c << ' ';
        }
        cout << endl;
    }
    return 0;
}

/*H. N Times
time limit per test1 second
memory limit per test256 megabytes
Given a number N
 and a character C
. Print the character(C
) N
 times.

Note: Solve this problem using function.

Input
The first line contains a number T
 (1≤T≤50)
 the number of test cases.

Next T
 lines contains a number N
 and a character C
 (1≤N≤100)
.

Output
Print T
 lines, for every line print the character(C
) N
 times separated by space.

Examples
InputCopy
2
1 n
5 O
OutputCopy
n 
O O O O O 
InputCopy
1
8 z
OutputCopy
z z z z z z z z */