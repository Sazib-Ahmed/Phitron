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

int count_size(Node *head) {
    Node *temp = head;
    int count = 0;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}


int main() {
    Node *head_1 = nullptr;
    Node *head_2 = nullptr;

    int v, size_1, size_2;
    while (cin >> v) {
        if (v == -1) break;
        enter_new_element(head_1, v);
    }

    while (cin >> v) {
        if (v == -1) break;
        enter_new_element(head_2, v);
    }

    //print_linked_list(head);
    size_1 = count_size(head_1);
    size_2 = count_size(head_2);

    cout << ((size_1 == size_2) ? "YES" : "NO") << endl;

    return 0;
}

/*
Question: Take two singly linked lists as input and check if their sizes are same or
not.
Sample Input Sample Output
2 1 5 3 4 9 -1
1 2 3 4 5 6 -1
YES
5 1 4 5 -1
5 1 4 -1
NO
*/