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

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int v;
    list<int> linkedList;

    while (cin >> v) {
        if (v == -1) break;
        linkedList.push_back(v);
    }

    linkedList.sort();
    linkedList.unique();

    for (auto i = linkedList.begin(); i != linkedList.end(); i++) {
        cout << *i << ' ';
    }
    cout<<endl;

    return 0;
}