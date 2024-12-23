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

void print_size(Node *head) {
    Node *temp = head;
    int count = 0;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    cout << count << endl;
}


int main() {
    Node *head = nullptr;
    int v;
    while (cin >> v) {
        if (v == -1) break;
        enter_new_element(head, v);
    }
    //print_linked_list(head);
    print_size(head);
    return 0;
}

/*
Question: Take a singly linked list as input and print the size of the linked list.
Sample Input Sample Output
2 1 5 3 4 8 9 -1 7
5 1 4 5 -1 4
*/