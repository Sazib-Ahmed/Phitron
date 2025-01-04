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

bool insert_at_head(){}
bool insert_at_tail(){}
bool insert_at_any_position(){}


bool insert_at_index(Node *&head, Node *&tail, int x, int v) {


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

int main() 
{
    Node *head = nullptr, *tail = nullptr;
    int q = 0, x = 0, v = 0;
    cin >> q;

    while (q--) {
        cin >> x >> v;
        bool succ = insert_at_index(head, tail, x, v);
        if (succ) print_list(head, tail);
        else cout <<"Invalid" << endl;
    }

    return 0;
}