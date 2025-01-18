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

int num_of_nodes(Node* root) {
    if(root == nullptr) return 0;

    int left = num_of_nodes(root->left);
    int right = num_of_nodes(root->right);

    return left + 1 + right;
}

int tree_max_depth(Node* root){
    if(root == nullptr) return 0;

    int left = tree_max_depth(root->left);
    int right = tree_max_depth(root->right);

    return max(left, right) + 1;
}

int main() 
{
    Node* root = tree_input_in_level_order();
    int nodes = num_of_nodes(root);
    int maxDepth = tree_max_depth(root);

    cout << (((pow(2, maxDepth) - 1) == nodes) ? "YES" : "NO") << endl;

    return 0;
}

/*
https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-06/challenges/perfect-binary-tree

Perfect Binary Tree
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a binary tree as input in level order. You need to tell if the binary tree is perfect or not. A binary tree is called perfect if all leaf nodes are at the maximum depth of the tree, and the tree is completely filled with no gaps.

Here is an example of perfect binary tree:

image

Also there is formula available to tell if a binary tree is perfect or not. The formula is :

Total number of nodes = -1
Note: Here depth is counted from . In the above image maximum depth is , so total number of nodes are . So there should be  nodes to call it a perfect binary tree.

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output  if the tree is perfect,  otherwise.
Sample Input 0

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 0

YES
Sample Input 1

10 20 30 40 -1 60 -1 -1 -1 -1 -1
Sample Output 1

NO
Sample Input 2

10 20 -1 -1 -1
Sample Output 2

NO
Sample Input 3

10 20 30 40 50 60 70 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 3

YES
*/