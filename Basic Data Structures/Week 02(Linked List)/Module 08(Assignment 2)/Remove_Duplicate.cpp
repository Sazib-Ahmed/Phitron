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
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int ele) {
    Node *newnode = new Node(ele);

    if (head == NULL && tail == NULL) {
        head = newnode;
        tail = newnode;    
    }
    else {
        tail->next = newnode;
        tail = newnode;
    }
}

void remove_duplicate(Node *head) {
        Node *temp = head;
        while (temp != NULL) {
            Node *curr = temp;
            while (curr->next != NULL) {
                if(temp->val == curr->next->val){
                    Node *deletenode = curr->next;
                    curr->next = curr->next->next;
                    delete deletenode;
                }
                else curr = curr->next;
            }
            temp = temp->next;
        }
    }

void print_linked_list(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << ' ';
            temp = temp->next;
        }
    }

int main()
{
    Node *head = NULL, *tail = NULL;
    int v;

    while (cin >> v){
        if (v == -1) break;
        insert_at_tail(head, tail, v);
    }

    remove_duplicate(head);
    print_linked_list(head);

    return 0;
}




/*
Remove Duplicate
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a singly linked list of integer values as input. You need to remove duplicate values from the linked list and finally print the linked list.

The process is, for each node N, traverse from that node and delete all nodes where the values are same with N.

Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output the final linked list where there will be no duplicate values.
Sample Input 0

1 2 3 4 5 -1
Sample Output 0

1 2 3 4 5
Sample Input 1

1 2 4 2 3 5 1 4 5 2 6 1 -1
Sample Output 1

1 2 4 3 5 6
Sample Input 2

5 5 1 1 2 4 2 4 1 3 5 0 -1
Sample Output 2

5 1 2 4 3 0
Sample Input 3

10 10 10 20 20 20 10 20 -1
Sample Output 3

10 20
*/