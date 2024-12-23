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

void if_duplicate_present(Node *head) {
    vector<int> freq(105, 0);
    Node *temp = head;
    bool dup = false;
    while (temp != nullptr) {
        freq[temp->val]++;
        if(freq[temp->val] > 1){
            dup = true;
            break;
        }
        temp = temp->next;
    }
    cout << (dup? "YES" : "NO") << endl;

}



int main() {
    Node *head = nullptr;
    int v;
    while (cin >> v) {
        if (v == -1) break;
        enter_new_element(head, v);
    }
    if_duplicate_present(head);
    //print_linked_list(head);
    return 0;
}

/*
Question: Take a singly linked list as input and check if the linked list contains
any duplicate value. Y ou can assume that the maximum value will be 100.
Sample Input Sample Output
5 4 8 6 2 1 -1 NO
2 4 5 6 7 4 -1 YES
*/