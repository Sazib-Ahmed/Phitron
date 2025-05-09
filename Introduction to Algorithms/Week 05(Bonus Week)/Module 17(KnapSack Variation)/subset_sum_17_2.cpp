#include <bits/stdc++.h>
using namespace std;
int a[1005];

bool subset_sum(int i, int sum) {

    if (i < 0) {
        if (sum == 0)
            return true;
        else return false;
    }

    if(a[i] <= sum) {
        bool opt1 = subset_sum(i-1, sum - a[i]);
        bool opt2 = subset_sum(i-1, sum);
        return opt1 || opt2;
    }
    else 
        return subset_sum(i-1, sum);

}

int main() {
    int n, sum;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> sum;

    bool is_poss = subset_sum(n-1, sum);
    cout << (is_poss ? "YES" : "NO") << endl;
}