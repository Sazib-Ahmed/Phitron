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


queue<pair<Node*, int>> input_nodes_to_queue_with_level(Node* root, int level) {
    queue<pair<Node*, int>> qu, given_level_nodes;
    if (root)
        qu.push({root, 0});

    while (!qu.empty()) {
        pair<Node*, int> currentPair = qu.front();
        qu.pop();

        Node* currentNode = currentPair.first;
        int currentLevel = currentPair.second;
        if (currentLevel == level)
            given_level_nodes.push(currentPair);
    
        if (currentNode->left)
            qu.push({currentNode->left, (currentLevel + 1)});
        if (currentNode->right)
            qu.push({currentNode->right, (currentLevel + 1)});
    }

    return given_level_nodes;
}

void print_given_level_nodes(queue<pair<Node*, int>> nodes) {
    while (!nodes.empty()) {
        pair<Node*, int> currentPair = nodes.front();
        nodes.pop();

        Node* currentNode = currentPair.first;

        cout << currentNode->val << ' ';
    }
}


int main() 
{
    Node* root = tree_input_in_level_order();
    if (!root) cout << "Invalid" << endl;

    int level = -1;
    cin >> level;

    queue<pair<Node*, int>> given_level_nodes = input_nodes_to_queue_with_level(root, level);
    if (given_level_nodes.empty())
        cout << "Invalid" << endl;
    else
        print_given_level_nodes(given_level_nodes);

    return 0;
}

/*
https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-06/challenges/level-nodes-2

Level Nodes
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a binary tree as input in level order. Also you will be given a level . You need to print all the node's values in that level from left to right. Assume that level starts from .

For example:

image

If , then the output for the above tree will be: 40 50 60

Note: If the level  is not a valid level, the print "Invalid".

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output all the node's values in level .
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
0
Sample Output 0

10
Sample Input 1

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
1
Sample Output 1

20 30
Sample Input 2

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
2
Sample Output 2

40 50 60
Sample Input 3

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
3
Sample Output 3

Invalid
*/