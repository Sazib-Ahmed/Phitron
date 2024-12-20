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
        Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int v) {
    Node *newnode = new Node(v);

    if (head == NULL && tail == NULL) {
        head = newnode;
        tail = newnode;    
    }
    else {
        newnode->next = head;
        head = newnode;
    }
}


void insert_at_tail(Node *&head, Node *&tail, int ele) {
    Node *newnode = new Node(ele);

    if (head == NULL && tail == NULL) {
        head = newnode;
        tail = newnode;    
    }
    else {
        tail->next = newnode;
        tail = newnode;
    }
}


void delete_at_indx(Node *&head, Node *&tail, int indx) {
    if (head == NULL) return;

    if (indx == 0) {
        Node *deletenode = head;
        head = head->next;
        if (head == NULL) tail = NULL;
        delete deletenode;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < indx - 1; i++) {
        if (temp->next == NULL) return;
        temp = temp->next;
    }

    if (temp->next == NULL) return; 
    Node *deletenode = temp->next;
    temp->next = temp->next->next;
    if (deletenode == tail) tail = temp;
    delete deletenode;
}


void print_linked_list(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << ' ';
            temp = temp->next;
        }
    }

int main(){
    Node* head = NULL, *tail = NULL;
    int q = 0, x, v;
    cin >> q;
    
    while (q--) {
        cin >> x >> v; 
        if (x == 0) insert_at_head(head, tail, v);
        else if (x == 1) insert_at_tail(head, tail, v);
        else if (x == 2) delete_at_indx(head, tail, v);
        print_linked_list(head);
        cout << endl;

    }
    return 0;
}





/*
Queries
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You have a singly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

If X is 0 that means you will insert the value V to the head of the linked list.
If X is 1 then you will insert the value V to the tail of the linked list.
If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
After each query you need to print the linked list.
Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 1000;
0 <= X <= 2;
0 <= V <= 10^9
Output Format

For each query ouput the updated linked list.
Sample Input 0

4
0 10
1 20
1 30
0 40
Sample Output 0

10 
10 20 
10 20 30 
40 10 20 30 
Sample Input 1

11
0 10
2 5
1 20
1 30
0 40
2 0
0 50
2 2
1 60
2 3
2 3
Sample Output 1

10 
10 
10 20 
10 20 30 
40 10 20 30 
10 20 30 
50 10 20 30 
50 10 30 
50 10 30 60 
50 10 30 
50 10 30 
Sample Input 2

10
1 4
2 1
0 9
0 10
2 2
1 5
2 0
2 1
2 5
2 2
Sample Output 2

4 
4 
9 4 
10 9 4 
10 9 
10 9 5 
9 5 
9 
9 
9 
*/