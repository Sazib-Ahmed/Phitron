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

void print_middle_element(Node *head) {
    Node *temp = head;
    int count = 0;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    temp = head;
    double middel_indx = count/2;
    
    while (middel_indx--) {
        temp = temp->next;
    }

    cout << temp->val;
    if (count%2 == 0) cout << ' ' << temp->next->val << endl;
    
}


int main() {
    Node *head = nullptr;
    int v;
    while (cin >> v) {
        if (v == -1) break;
        enter_new_element(head, v);
    }
    //print_linked_list(head);
    print_middle_element(head);
    return 0;
}

/*
Question: Take a singly linked list as input and print the middle element. If there
are multiple values in the middle print both.
Sample Input Sample Output
2 4 6 8 10 -1 6
1 2 3 4 5 6 -1 3 4
*/