#include <iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node* head_a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);

    head_a->next = b;
    b->next = c;

    Node* temp = head_a;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}