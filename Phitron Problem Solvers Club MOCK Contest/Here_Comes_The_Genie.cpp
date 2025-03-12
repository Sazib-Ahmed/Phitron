#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n, greater<long long>());
    long long int totalTaken = 0, preTaken = a[0] + 1;

    for (int i = 0; i < n; i++) {
        long long canTake = min(a[i], (preTaken - 1 < 0 ? 0 : preTaken - 1));
        totalTaken += canTake;
        preTaken = canTake;
    }
    
    cout << totalTaken << endl;
    return 0;
}


/*Here Comes The Genie_
Problem
Submissions
Discussions
Problem Statement

Here comes the genie with n bags. The i-th bag contains ai balls of color i. Your goal is to collect as many balls as possible. However, the genie has a condition: the number of balls you take from each color must be distinct. More formally, if you take ci balls of color i where ci <= ai, then you cannot take ci balls of another color j.

For example, suppose n = 3 and a = [1, 2, 4].

You can take c = [1, 2, 3]  or c = [1, 2, 4]. However, you cannot take  c = [1, 2, 2] or c = [1, 1, 4] , as these sets violate the condition of having distinct elements.

It's acceptable to take 0 balls from multiple bags. For instance, c = [0, 0, 1] or c = [0, 0, 0] are valid.

Now, you ask yourself: What is the maximum number of balls that you can collect?

Input Format

First line contains 
Next line contains the array a1, a2, a3, ........, an
Constraints
1 =< n <= 2* 10^5
1 =< ai <= 10^9

Output Format

Output the maximum number of balls that you can collect.

Sample Input 0

4
1 1 2 1
Sample Output 0

3
Sample Input 1

3
1 4 5
Sample Output 1

10
Sample Input 2

4
5 1 1 4
Sample Output 2

10
*/