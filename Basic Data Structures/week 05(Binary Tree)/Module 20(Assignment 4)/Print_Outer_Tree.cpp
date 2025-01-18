#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    Node* left;
    int val;
    Node* right;

    Node(int v) {
        this->left = nullptr;
        this->val = v;
        this->right = nullptr;
    }
};

Node* tree_input_in_level_order() {
    int v;
    if(!(cin >> v) || v == -1) return nullptr;

    Node* root = new Node(v);
    queue<Node*> qu;
    qu.push(root);

    while (!qu.empty()) {
        Node* current = qu.front();
        qu.pop();

        if(cin >> v && v != -1) {
            Node* newNode = new Node(v);
            current->left = newNode;
            qu.push(newNode);
        }
        
        if(cin >> v && v != -1) {
            Node* newNode = new Node(v);
            current->right = newNode;
            qu.push(newNode);
        }
    }
    return root;
}

void print_left_nodes_in_rev(Node* root) {
    if(!root) return;

    if(root->left)
        print_left_nodes_in_rev(root->left);
    else if(root->right)
        print_left_nodes_in_rev(root->right);

    cout << root->val << ' ';

}

void print_right_nodes(Node* root){
    if(!root) return;

    cout << root->val << ' ';

    if(root->right)
        print_right_nodes(root->right);
    else if(root->left)
        print_right_nodes(root->left);
}

int main() 
{
    Node* root = tree_input_in_level_order();
    if (!root) return 0;

    print_left_nodes_in_rev(root->left);
    cout << root->val << ' ';
    print_right_nodes(root->right);

    return 0;
}


/*
https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-06/challenges/print-outer-tree

Print Outer Tree
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a binary tree as input in level order. You need to print the outer side of the binary tree. See the sample input output for more clarifications. You need to print from the left most leaf node to right most leaf node.

For example:

image

The output for the above tree will be: 90 40 20 10 30 50 60

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the left most leaf node to right most leaf node.
Sample Input 0

10
20 30
40 70 -1 50
90 110 -1 -1 80 60
-1 -1 -1 -1 100 -1 -1 -1
-1 -1
Sample Output 0

90 40 20 10 30 50 60 
Explanation 0

This test case was explained in the question.
Sample Input 1

10
20 30
-1 40 70 50
60 90 -1 -1 80 -1
-1 -1 -1 -1 100 110
-1 -1 -1 -1
Sample Output 1

60 40 20 10 30 50 80 110 
Explanation 1

Outer part of the binary tree - 
image

Sample Input 2

10
-1 20
-1 50
80 -1
-1 -1
Sample Output 2

10 20 50 80
Explanation 2

Outer part of the binary tree - 
image

Sample Input 3

10
20 -1
-1 50
80 -1
-1 -1
Sample Output 3

80 50 20 10 
Explanation 3

Outer part of the binary tree - 
image
*/