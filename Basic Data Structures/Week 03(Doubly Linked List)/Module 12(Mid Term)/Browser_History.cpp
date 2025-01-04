// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// #include <map>
// #include <set>
// #include <queue>
// #include <stack>
// #include <cmath>
// #include <cstdio>
// #include <cstdlib>
// #include <cstring>
// #include <climits>
//Using STL List
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    list<string> addressList;
    string adrs, cmd;
    int q;
    auto pos = addressList.begin();

    while (cin >> adrs) {
        if (adrs == "end") break;
        addressList.push_back(adrs);
    }

    cin >> q;
    while (q--) {
        cin >> cmd;
        if(cmd == "visit") {
            cin >> adrs;
            bool found = false;
            for(auto i = addressList.begin(); i != addressList.end(); i++) {
                if(adrs == *i) {
                    cout << *i << endl;
                    pos = i;
                    found = true;
                    break;
                }
            }
            if(!found) cout << "Not Available" << endl;
        }
        else if(cmd == "prev") {
           if(pos == addressList.begin()) {
                cout << "Not Available" << endl;
                continue;
            }
            cout << *prev(pos,1) << endl;
            pos = prev(pos,1);

        }
        else if(cmd == "next") {
            if(next(pos,1) == addressList.end()) {
                cout << "Not Available" << endl;
                continue;
            }
            cout << *next(pos,1) << endl;
            pos = next(pos,1);

        }
    }

    return 0;
}