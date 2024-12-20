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

class Node {
    public: 
        int val;
        Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int ele) {
    Node* newnode = new Node(ele);

    if (head == NULL && tail == NULL) {
        head = newnode;
        tail = newnode;    
    }
    else {
        tail->next = newnode;
        tail = newnode;
    }
}

void search(Node* head, int x){
    Node* temp = head;
    int indx = -1;
    bool is_psnt = false;

    while (temp != NULL) {
        indx++;
        if (temp->val == x) {
            is_psnt = true;
            break;
        }
    }

    cout << (is_psnt? indx : -1) << endl;

}

int main(){
    int t = 0;
    cin >> t;

    while (t--) {
        Node* head = NULL;
        Node* tail = NULL;
        int v, x;
        while (cin >> v)
            if (v == -1) break;
            insert_at_tail(head, tail, v);
        }

        cin >> x;




    return 0;
}




/*
Search
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You need to take a singly linked list of integer values as input. Afterward, you will be given an integer value X. Your task is to determine whether X is present in the linked list or not. If it is present, print its first index from the left side; otherwise, print -1. Assume that the linked list's index starts with 0.

Note: You must use a singly linked list; otherwise, you will not receive marks.

Input Format

First line will contain T, the number of test cases.
First line of each test case will contain the values of the singly linked list, and will terminate with -1.
Second line of each test case will contain X.
Constraints

1 <= T <= 100
1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
-10^9 <= V <= 10^9; Here V is the value of each node.
-10^9 <= X <= 10^9
Output Format

Output the index of X in the linked list.
Sample Input 0

4
1 2 3 4 5 -1
3
1 2 3 -1
5
1 -1
1
10 20 -1
20
Sample Output 0

2
-1
0
1
*/