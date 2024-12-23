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
    
    Node (int v) {
        this->val = v;
        this->next = nullptr;
    }
};

void insert_new_element(Node *&head, int v) {
    Node *newnode = new Node(v);
    if(head == nullptr) {
        head = newnode;
    }
    else {
        Node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void check_if_asc(Node *head) {
    Node *temp = head;
    bool flag_is_asc = true;
    while (temp->next->next != nullptr) {
        if (temp->val > temp->next->val) {
            flag_is_asc = false;
            break;
        }
        temp = temp->next;
    }

    cout << (flag_is_asc? "YES" : "NO") << endl;

}

void check_if_asc(Node *head) {
    if (head == nullptr || head->next == nullptr) { // Empty or single-node list is ascending
        cout << "YES" << endl;
        return;
    }

    Node *temp = head;
    bool flag_is_asc = true;

    while (temp->next != nullptr) { // Check until the last node
        if (temp->val > temp->next->val) {
            flag_is_asc = false;
            break;
        }
        temp = temp->next;
    }

    cout << (flag_is_asc ? "YES" : "NO") << endl;
}

int main() {
    Node *head = nullptr;
    int v;
    while (cin >> v) {
        if (v == -1) break;
        insert_new_element(head, v);
    }
    check_if_asc(head);

    return 0;
    

}

/*
Question: Take a singly linked list as input and check if the linked list is sorted in
ascending order.
Sample Input Sample Output
1 5 6 8 9 -1 YES
2 4 6 5 8 4 -1 NO
*/