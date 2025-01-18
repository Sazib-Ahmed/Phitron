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

int sum_without_leaf(Node* root) {
    if(root == nullptr || (root->left == nullptr && root->right == nullptr)) return 0;

    int left = sum_without_leaf(root->left);
    int right = sum_without_leaf(root->right);
    return left + root->val + right;
}


int main() 
{
    Node* root = tree_input_in_level_order();
    cout << sum_without_leaf(root) << endl;

    return 0;
}






/*
https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-06/challenges/sum-without-leaf

Sum Without Leaf
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a binary tree as input in level order. You need to output the sum of all node's values in that tree except the leaf nodes.

For example:

image

The output for the above tree will be: 60

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the total sum of that tree except the leaf nodes.
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
Sample Output 0

60
*/