#include <bits/stdc++.h>
using namespace std;

class EDGE {
    public:
    int a, b, cost;
    EDGE(int a, int b, int cost) {
        this->a = a;
        this->b = b;
        this->cost = cost;
    }
};

bool cmp(EDGE l, EDGE r) {
    return l.cost < r.cost;
}


int main() {
    int node, edge;
    cin >> node >> edge;
    vector<EDGE> edgeList;    
    while (edge--) {
        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(EDGE(a, b, c));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    for (auto edge: edgeList) {
        cout << edge.a << ' ' << edge.b << ' ' << edge.cost << endl;
    }
}

