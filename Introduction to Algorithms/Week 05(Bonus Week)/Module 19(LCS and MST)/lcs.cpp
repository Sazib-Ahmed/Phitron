#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int dp[1005][1005];

int lcs(int i, int j) {
    if (i < 0 || j < 0) return 0;
    if (dp[i][j] != -1) return dp[i][j];

    if (s1[i] == s2[j])
        return dp[i][j] = lcs(i - 1, j - 1) + 1;
    else {
        int opt1 = lcs(i - 1, j);
        int opt2 = lcs(i, j - 1);
        return dp[i][j] = max(opt1, opt2);
    }
}

int main() {
    memset(dp, -1 , sizeof(dp));
    cin >> s1 >> s2;
    cout << lcs(s1.size() - 1, s2.size() - 1) << endl;

}