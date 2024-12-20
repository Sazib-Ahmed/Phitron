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
class Node{
    public:
        int val;
        Node* next;
    
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int el) {
    Node* newnode = new Node(el);
    if (head == NULL && tail == NULL) {
        head = newnode;
        tail = newnode;
    }
    else {
        tail->next = newnode;
        tail = newnode;
    }
}

void print_linked_list(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << ' ';
            temp = temp->next;
        }
    }

int find_max(Node* head) {
    Node* temp = head;
    int max = temp->val;
    while (temp != NULL) {
        if (max < temp->val) max = temp->val;
        temp = temp->next;
    }
    return max;
}

int find_min(Node* head) {
    Node* temp = head;
    int min = temp->val;
    while (temp != NULL) {
        if (min > temp->val) min = temp->val;
        temp = temp->next;
    }
    return min;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int el;
    while (cin >> el) {
        if (el == -1) break;
        insert_at_tail(head, tail, el);
    }

    int max = find_max(head);
    int min = find_min(head);

    cout << max - min << endl;
    //print_linked_list(head);

    return 0;
}

/*
Get Difference
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

Note: You must use singly linked list to solve this problem, otherwise you will not get marks.

Input Format

Input will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
-10^9 <= V <= 10^9; Here V is the value of each node.
Output Format

Output the difference between the maximum and minimum value.
Sample Input 0

2 4 1 5 3 6 -1
Sample Output 0

5
Sample Input 1

2 -1
Sample Output 1

0

*/