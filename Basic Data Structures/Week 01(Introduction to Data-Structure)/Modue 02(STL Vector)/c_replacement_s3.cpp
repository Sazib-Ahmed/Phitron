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
    int n = 0;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // for(int i = 0; i < n; i++){
    //     if (a[i] < 0) a[i] = 2;
    //     else if (a[i] > 0) a[i] = 1;
    // }

    for (int i = 0; i < n; i++) {
        a[i] = (a[i] > 0) ? 1 : (a[i] < 0) ? 2 : a[i];
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }

    return 0;
}