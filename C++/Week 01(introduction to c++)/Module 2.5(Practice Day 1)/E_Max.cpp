#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, _max = INT_MIN, a;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        _max = max(_max , a);
    }

    cout << _max;

    return 0;
}