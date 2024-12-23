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

    Node(int v) {
        this->val = v;
        this->next = nullptr;
    }
};

void insert_new_element(Node *&head, int v) {
    Node *newnode = new Node(v);
    if (head == nullptr) head = newnode; 
    else {
        Node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}


void print_linked_list(Node *&head) {
    for (Node *i = head; i != nullptr; i = i->next) {
        cout << i->val << ' ';
    }
    cout << endl;
}

int count_size(Node *head) {
    Node *temp = head;
    int count = 0;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_at_index(Node *&head, int indx, int v) {
    Node *newnode = new Node(v), *temp = head;

    int size = count_size(head);
    if (indx > size) {
        cout << "Invalid" << endl;
        return;
    }
    if (indx == 0){
        newnode->next = head;
        head = newnode;
    }
    else {
        for(int i = 0; i < indx-1; i++) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    print_linked_list(head);
}



int main() {
    Node *head = nullptr;
    int v, indx;
    while (cin >> v) {
        if (v == -1) break;
        insert_new_element(head, v);
    }

    while (cin >> indx >> v) {
        //cout << "---- NEW ----" << endl;
        insert_at_index(head, indx, v);
    }

    return 0;
}

