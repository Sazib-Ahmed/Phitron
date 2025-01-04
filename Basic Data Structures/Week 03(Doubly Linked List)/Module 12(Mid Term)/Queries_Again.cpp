#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        Node *prev;
        int val;
        Node *next;

    Node(int v) {
        this->prev = nullptr;
        this->val = v;
        this->next = nullptr;
    }
};

bool insert_at_head(Node *&head, Node *&tail, int v) {
    Node *newNode = new Node(v);
    if (head == nullptr && tail == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    return true;
}

void insert_at_tail(Node *&head, Node *&tail, int v) {
    Node *newNode = new Node(v);
    if (head == nullptr && tail == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insert_at_any_position(Node *head, int x, int v) {
    Node *tempHead = head, *newNode = new Node(v);
    for (int i = 1; i < x; i++) {
        if (tempHead == nullptr) return; 
        tempHead = tempHead->next;
    }
    newNode->next = tempHead->next;
    newNode->prev = tempHead;
    if (tempHead->next != nullptr) {
        tempHead->next->prev = newNode;
    }
    tempHead->next = newNode;
}

int length(Node *head) {
    int len = 0;
    Node *tempHead = head;
    while (tempHead != nullptr) {
        len++;
        tempHead = tempHead->next;
    }
    return len;
}

bool insert_at_index(Node *&head, Node *&tail, int x, int v) {
    int len = length(head);
    bool flag_succ = false;

    if (x < 0 || x > len) return false;
    else if (x == 0) { 
        insert_at_head(head, tail, v);
        flag_succ = true;
    } else if (x == len) { 
        insert_at_tail(head, tail, v);
        flag_succ = true;
    } else { 
        insert_at_any_position(head, x, v);
        flag_succ = true;
    }

    return flag_succ;
}

void print_left_to_right(Node *head) {
    Node *temp = head;
    cout << "L -> ";
    while (temp != nullptr) {
        cout << temp->val << ' ';
        temp = temp->next;
    }
    cout << endl;
}

void print_right_to_left(Node *tail) {
    Node *temp = tail;
    cout << "R -> ";
    while (temp != nullptr) {
        cout << temp->val << ' ';
        temp = temp->prev;
    }
    cout << endl;
}

void print_list(Node *head, Node *tail) {
    print_left_to_right(head);
    print_right_to_left(tail);
}

int main() {
    Node *head = nullptr, *tail = nullptr;
    int q = 0, x = 0, v = 0;
    cin >> q;

    while (q--) {
        cin >> x >> v;
        bool succ = insert_at_index(head, tail, x, v);
        if (succ) {
            print_list(head, tail);
        } else {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}
