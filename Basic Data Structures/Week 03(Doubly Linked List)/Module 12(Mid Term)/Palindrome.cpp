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

class Node{
    public:
        Node *previous;
        int val;
        Node *next;

    Node(int v){
        this->previous = nullptr;
        this->val = v;
        this->next = nullptr;
    }
};

void insert_new_node(Node *&head, Node *&tail, int v){  
    if(head == nullptr && tail == nullptr) {
        Node *newNode = new Node(v);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(v);
    tail->next = newNode;
    newNode->previous = tail;
    tail = newNode;
}

void print_doubly_linked_list(Node* head) {
    Node *temp = head;
    while(temp != nullptr) {
        cout << temp->val << ' ';
        temp = temp->next;
    }
    cout << endl;
}

void check_if_pasindrome(Node *head, Node *tail) {
    bool isPal = true;
    Node *tempHead = head, *tempTail = tail;
    while(tempHead != nullptr && tempTail != nullptr && tempHead != tempTail && tempHead->previous != tail) {
        if(tempHead->val != tempTail->val) {
            isPal = false;
            break;
        }
        tempHead = tempHead->next;
        tempTail = tempTail->previous;
    }
    cout << (isPal ? "YES" : "NO") << endl;
}

int main() {
    Node *head = nullptr, *tail = nullptr;
    int v;

    while (cin >> v) {
        if(v == -1) break;
        insert_new_node(head, tail, v);
    }

    check_if_pasindrome(head, tail);
    //print_doubly_linked_list(head);

    return 0;
}


