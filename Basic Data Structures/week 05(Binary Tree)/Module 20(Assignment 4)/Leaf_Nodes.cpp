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

vector<Node*> leafNodes;

void leaf_nodes(Node* root) {
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr) leafNodes.push_back(root);

    leaf_nodes(root->left);
    leaf_nodes(root->right);
}

bool comp (Node* left, Node* right) {
    return left->val > right->val;
}

int main() 
{
    Node* root = tree_input_in_level_order();
    leaf_nodes(root);

    sort(leafNodes.begin(), leafNodes.end(), comp);
    int sz = leafNodes.size();

    int i = 0;
    while (i < sz) {
        cout << leafNodes[i]->val << ' ';
        i++;
    }

    return 0;
}


/*
https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-06/challenges/leaf-nodes-1

Leaf Nodes
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a binary tree as input in level order. You need to print the values of leaf nodes in descending order.

For example:

image

The output for the above tree will be: 60 50 40

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the values of leaf nodes in descending order.
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
Sample Output 0

60 50 40
*/