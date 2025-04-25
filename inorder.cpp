#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    // Traverse the left subtree
    inorderTraversal(root->left);

    // Visit the root node
    cout << root->data << " ";

    // Traverse the right subtree
    inorderTraversal(root->right);
}

int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}