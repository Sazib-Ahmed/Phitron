#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int h[n];

        cin >> h[0] >> h[1];
        int firstIndx = (h[0] > h[1]) ? 0 : 1;
        int secondIndx = (h[0] > h[1]) ? 1 : 0;

        for (int i = 2; i < n; i++) {
            cin >> h[i];
            if (h[i] > h[firstIndx]) {
                secondIndx = firstIndx;
                firstIndx = i;
            } else if (h[i] > h[secondIndx]) {
                secondIndx = i;
            }
        }
        cout << (firstIndx < secondIndx ? firstIndx : secondIndx) << ' ' << (firstIndx < secondIndx ? secondIndx : firstIndx) << endl;
    }
    return 0;
}

/*
https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-06/challenges/water-4-1


Water
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You are given an array H representing the heights of N vertical lines positioned at equally spaced intervals along a two-dimensional plane. The i-th line's height is represented by the integer Hi where 0 <= i < N and the height will be unique.

You need to find the two lines, such that together with the x-axis forms a container that can hold the most water in term of height.

Note: Print the left index first, then the right index.

Input Format

First line will contain T, the number of test cases.
First line of each test case will contain N.
Second line of each test case will contain the array H.
Constraints
Constraints
1. 2 ≤ N ≤ 10^5
2. 0 ≤ Hi ≤ 10^9
4. 1 ≤ T ≤ 10^3

Output Format

Ouptut two integers, the index of those two lines that can contain the most water in term of height.
Sample Input 0

2
9
1 8 3 4 0 7 6 5 2
5
5 2 1 6 3
Sample Output 0

1 5
0 3
Explanation 0

In the first test case, you can choose index 1 and 5 that can hold the most water in height which is 7.
*/

/*

#include <bits/stdc++.h>
using namespace std;

pair<int, int> maxHeightContainer(const vector<int>& H) {
    int left = 0;
    int right = H.size() - 1;
    int max_height = 0;
    pair<int, int> result = {0, 0};

    while (left < right) {
        int current_height = min(H[left], H[right]);
        if (current_height > max_height) {
            max_height = current_height;
            result = {left, right};
        }
        if (H[left] < H[right]) {
            left++;
        } else {
            right--;
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> H(N);
        for (int i = 0; i < N; ++i) {
            cin >> H[i];
        }
        pair<int, int> result = maxHeightContainer(H);
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int heights[n];
        int first_max = -1;
        int second_max = -1;
        int first_idx;
        int second_idx;

        for (int i = 0; i < n; i++)
        {
            cin >> heights[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (heights[i] > first_max)
            {
                first_max = heights[i];
                first_idx = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (heights[i] > second_max && heights[i] < first_max)
            {
                second_max = heights[i];
                second_idx = i;
            }
        }

        if(first_idx>second_idx) cout<< second_idx<<" "<<first_idx<<endl;
        else cout << first_idx << " " << second_idx << endl;
    }
}
*/


/*#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> h(n);
        int firstIndx = 0, secondIndx = 0;

        for (int i = 0; i < n; i++) {
            cin >> h[i];
            if (h[i] > h[firstIndx]) {
                secondIndx = firstIndx;
                firstIndx = i;
            } else if (h[i] > h[secondIndx]) {
                secondIndx = i;
            }
        }

        if (firstIndx < secondIndx) {
            cout << firstIndx << ' ' << secondIndx << '\n';
        } else {
            cout << secondIndx << ' ' << firstIndx << '\n';
        }
    }

    return 0;
}
*/