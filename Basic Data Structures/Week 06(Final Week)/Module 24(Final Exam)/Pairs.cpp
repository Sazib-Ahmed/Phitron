#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> l, pair<string, int> r) {
    if (l.first < r.first) return true;
    else if (l.first > r.first) return false;
    else return l.second > r.second;
}

int main() 
{
    int n = 0;
    cin >> n;
    vector<pair<string, int>> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end(), cmp);

    for (auto p : a) {
        cout << p.first << ' ' << p.second << endl;
    }

    return 0;
}

/*
//timeout

#include <bits/stdc++.h>
using namespace std;

class CustomPair{
    public:
        string name;
        int val;

        CustomPair(string name, int val) {
            this->name = name;
            this->val = val;
        }
};

class Cmp{
    public:
        bool operator()(CustomPair l, CustomPair r) {
            if (l.name > r.name) return true;
            else if (l.name < r.name) return false;
            else return l.val < r.val;
        }
};

int main() 
{
    int n = 0;
    cin >> n;

    priority_queue<CustomPair, vector<CustomPair>, Cmp> a;

    for(int i = 0; i < n; i++) {
        string name;
        int val;
        cin >> name >> val;
        CustomPair obj(name, val);
        a.push(obj);
    }

    while (!a.empty()) {
        cout << a.top().name << ' ' << a.top().val << endl;
        a.pop();
    }
    return 0;
}
*/

/*
https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-06/challenges/pairs-17

Pairs
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a list  of type pairs. Each pair will contain one string  and one unique integer . The string will contain only English lowercase alphabets and no spaces.

You need to sort the pairs according to the string values in ascending order. If there are multiple pairs with the same string, you need to sort them according to the integer value in descending order.

Input Format

First line will contain , the size of the list .
Next  lines will contain pairs of string  and integer .
Constraints

Output Format

Output the final list after sorting according to the question.
Sample Input 0

5
sakib 1
rakib 2
tasfia 3
asfia 4
afia 5
Sample Output 0

afia 5
asfia 4
rakib 2
sakib 1
tasfia 3
Sample Input 1

6
sakib 5
rakib 3
tasfia 2
sakib 6
afia 1
sakib 4
Sample Output 1

afia 1
rakib 3
sakib 6
sakib 5
sakib 4
tasfia 2
*/