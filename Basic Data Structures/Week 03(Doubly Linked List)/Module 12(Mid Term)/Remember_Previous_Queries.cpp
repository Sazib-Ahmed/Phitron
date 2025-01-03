#include <bits/stdc++.h>
using namespace std;

void print_left_to_right(list<int> linkedList) {
    cout << "L ->";
    for (auto i = linkedList.begin(); i != linkedList.end(); i ++) {
        cout <<' '<< *i;
    }
    cout << endl;
}

void print_right_to_left(list<int> linkedList) {
    cout << "R ->";
    for (auto i = --linkedList.end(); i != --linkedList.begin(); i --) {
        cout <<' '<< *i;
    }
    cout << endl;
}

int main() 
{
    int q = 0, x = -1, v = -1;
    list<int> linkedList;

    cin >> q;
    while (q--) {
        cin >> x >> v;
        switch (x){
            case 0:
                linkedList.push_front(v);
                print_left_to_right(linkedList);
                print_right_to_left(linkedList);
                break;
            case 1:
                linkedList.push_back(v);
                print_left_to_right(linkedList);
                print_right_to_left(linkedList);
                break;
            case 2:
                int listSize = linkedList.size();
                if(v >= 0 && v < listSize) {
                    linkedList.erase(next(linkedList.begin(), v));
                }
                print_left_to_right(linkedList);
                print_right_to_left(linkedList);
                break;
        }
    }
    return 0;
}