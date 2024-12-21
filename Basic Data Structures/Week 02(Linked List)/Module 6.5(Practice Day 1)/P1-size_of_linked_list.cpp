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
        this->next = nullptr;
    }
};

void enter_new_element(Node *&head, int val){
    Node *temp = head;
    Node *newnode = new Node(val);
    if (head == nullptr) head = newnode;
    else {
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}


int main() {
    Node *head = nullptr;
    int v;
    while (cin >> v) {
        if (v == -1) break;
        enter_new_element(head, v);
    }
    print_linked_list(head);
    return 0;
}