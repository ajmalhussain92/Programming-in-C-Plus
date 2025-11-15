#include <iostream>
using namespace std;

// Binary Tree

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = nullptr;
    }

    void insert(int value) {
        root = insertRec(root, value);
    }

private:
    Node* insertRec(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insertRec(node->left, value);
        } else {
            node->right = insertRec(node->right, value);
        }
        return node;
    }
};

int main() {
	
    BinaryTree tree;
    tree.insert(10);
    tree.insert(5);
    tree.insert(20);
    cout << "Binary Tree created with root value: " << tree.root->data << endl;
    
    return 0;
}
