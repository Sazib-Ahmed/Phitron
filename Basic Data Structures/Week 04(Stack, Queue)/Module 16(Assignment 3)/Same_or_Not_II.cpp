
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

//#include <bit/stdc++.h>
using namespace std;

//implementing stack using singly linked list with only previous connection.
class StNode{
    public:
        int val;
        StNode *prev;

    StNode(int v) {
        this->val = v;
        this->prev = nullptr;
    }
};

class MyStack{
    public:
    StNode *head = nullptr, *tail = nullptr;
    int sz = 0;
    void push(int v) {
        sz++;
        StNode *newNode = new StNode(v);
        if  (head == nullptr) {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail = newNode;
    }

    void pop() {
        sz--;
        StNode *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == nullptr) {
            head = nullptr;
        }
    
    }

    int top() {
        return tail->val;
    }

    bool empty() {
        return head == nullptr;
    }

    int size() {
        return sz;
    }
};

//implementing queue using singly linked list
class QuNode{
    public:
        int val;
        QuNode *next;

    QuNode(int v) {
        this->val = v;
        this->next = nullptr;
    }
};


class MyQueue{
    public:
    QuNode *head = nullptr, *tail = nullptr;
    int sz = 0;
    void push(int v) {
        sz++;
        QuNode *newNode = new QuNode(v);
        if  (head == nullptr) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop() {
        sz--;
        QuNode *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == nullptr) {
            tail = nullptr;
        }
    
    }

    int front() {
        return head->val;
    }

    int back() {
        return tail->val;
    }

    bool empty() {
        return head == nullptr;
    }

    int size() {
        return sz;
    }
};


int main() {
    int n = 0, m = 0, el;
    bool isSame = true;
    MyStack stA;
    MyQueue quB;

    cin >> n >> m;

    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }

    while (n--) {
        cin >> el;
        stA.push(el);
    }

    while (m--) {
        cin >> el;
        quB.push(el);
    }

    while (!stA.empty()) {
        int stEl = stA.top();
        int quEl = quB.front();
        if (stEl != quEl) {
            isSame = false;
            break;
        }
        stA.pop();
        quB.pop();
    }

    cout << (isSame ? "YES" : "NO") << endl;
    return 0;
}



/*
https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/same-or-not-4
Same or Not II
Problem
Submissions
Leaderboard
Discussions
Problem Statement

There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You cannot use any  here. You need to implement the stack and queue by yourself. You can use linked list or array as you want.

Input Format

First line will contain  and .
Second line will contain stack  with  values.
Third line will contain queue  with  values.
Constraints

Output Format

Output YES if they were same, otherwise NO.
Sample Input 0

5 5
10 20 30 40 50
50 40 30 20 10
Sample Output 0

YES
Sample Input 1

4 4
10 20 30 40
10 20 30 40
Sample Output 1

NO
Sample Input 2

5 4
1 2 3 4 5
5 4 3 2
Sample Output 2

NO
Submissions: 227
Max Score: 20
Difficulty: Easy
Rate This Challenge:

    
More
 

*/