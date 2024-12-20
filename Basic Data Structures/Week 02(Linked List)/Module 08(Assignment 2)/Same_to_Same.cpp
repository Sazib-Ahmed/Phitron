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

void same_to_same(Node *head1, Node *head2){
    Node *temp1 = head1;
    Node *temp2 = head2;
    bool is_same = true;

    while (temp1 != NULL && temp2 != NULL) {
        if((temp1->val != temp2->val)){
            is_same = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 != NULL || temp2 != NULL) {
        is_same = false;
    }

    cout << (is_same? "YES" : "NO") << endl;
}



int main()
{
    Node *head1 = NULL, *head2 = NULL, *tail1 = NULL, *tail2 = NULL;
    int v;

    while (cin >> v){
        if (v == -1) break;
        insert_at_tail(head1, tail1, v);
    }
    while (cin >> v){
        if (v == -1) break;
        insert_at_tail(head2, tail2, v);
    }

    same_to_same(head1, head2);
    return 0;
}




/*
Same to Same
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain the values of the first singly linked list, and will terminate with -1.
Second line will contain the values of the second singly linked list, and will terminate with -1.
Constraints

1 <= N1, N2 <= 1000; Here N1 and N2 is the maximum number of nodes of the first and second linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output "YES" or "NO".
Sample Input 0

10 20 30 40 -1
10 20 30 40 -1
Sample Output 0

YES
Sample Input 1

10 20 30 40 -1
10 20 30 -1
Sample Output 1

NO
Sample Input 2

10 20 30 40 -1
40 30 20 10 -1
Sample Output 2

NO
Submissions: 308
Max Score: 20
Difficulty: Easy
Rate This Challenge:

    
More
 
*/