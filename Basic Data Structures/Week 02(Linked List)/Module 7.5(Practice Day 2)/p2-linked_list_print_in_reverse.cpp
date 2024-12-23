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

void print_linked_list_reverse(Node *temp) {
    if(temp ==nullptr) return;
    print_linked_list_reverse(temp->next);
    cout << temp->val << " ";
}


int main() {
    Node *head = nullptr;

    int v;
    while (cin >> v) {
        if (v == -1) break;
        enter_new_element(head, v);
    }

    Node *temp = head;

    print_linked_list_reverse(temp);

    return 0;
}

/*
Question: Take a singly linked list as input and print the reverse of the linked list.
Sample Input Sample Output
5 4 8 6 2 1 -1 1 2 6 8 4 5
1 2 3 4 -1 4 3 2 1
*/