#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    Node* root;

    void preorderTraversal(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }

    void inorderTraversal(Node* node) {
        if (node == nullptr) return;
        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }

    void postorderTraversal(Node* node) {
        if (node == nullptr) return;
        postorderTraversal(node->left);
        postorderTraversal(node->right);
        cout << node->data << " ";
    }

public:
    BinaryTree() : root(nullptr) {}

    Node* createNode() {
        int value;
        cout << "Enter value (-1 for NULL): ";
        cin >> value;

        if (value == -1) return nullptr;

        Node* newNode = new Node(value);
        cout << "Enter left child of " << value << ":\n";
        newNode->left = createNode();
        cout << "Enter right child of " << value << ":\n";
        newNode->right = createNode();

        return newNode;
    }

    void createTree() {
        cout << "Create the binary tree:\n";
        root = createNode();
    }

    void preorder() {
        cout << "Preorder Traversal: ";
        preorderTraversal(root);
        cout << "\n";
    }

    void inorder() {
        cout << "Inorder Traversal: ";
        inorderTraversal(root);
        cout << "\n";
    }

    void postorder() {
        cout << "Postorder Traversal: ";
        postorderTraversal(root);
        cout << "\n";
    }
};

int main() {
    BinaryTree tree;
    tree.createTree();
    tree.preorder();
    tree.inorder();
    tree.postorder();

    return 0;
}
