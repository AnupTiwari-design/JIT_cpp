#include <iostream>
using namespace std;

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

class BST {
public:
    Node* insert(Node* root, int value) {
        if (root == nullptr) {
            return new Node(value);
        }
        if (value < root->data) {
            root->left = insert(root->left, value);
        }
        else if (value > root->data) {
            root->right = insert(root->right, value);
        }
        return root;
    }

    void inorder(Node* root) {
        if (root == nullptr) return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    Node* search(Node* root, int key) {
        if (root == nullptr || root->data == key) return root;
        if (key < root->data)
            return search(root->left, key);
        else
            return search(root->right, key);
    }

    Node* findMin(Node* root) {
        while (root && root->left != nullptr)
            root = root->left;
        return root;
    }

    Node* deleteNode(Node* root, int value) {
        if (root == nullptr) {
            return root;
        }
        if (value < root->data) {
            root->left = deleteNode(root->left, value);
        }
        else if (value > root->data) {
            root->right = deleteNode(root->right, value);
        }
        else {
            if (root->left == nullptr && root->right == nullptr) {
                delete root;
                return nullptr;
            }
            else if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            }
            else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            else {
                Node* successor = findMin(root->right);
                root->data = successor->data;
                root->right = deleteNode(root->right, successor->data);
            }
        }
        return root;
    }
};

int main() {
    BST tree;
    Node* root = nullptr;
    root = tree.insert(root, 50);
    root = tree.insert(root, 30);
    root = tree.insert(root, 70);
    root = tree.insert(root, 20);
    root = tree.insert(root, 40);
    root = tree.insert(root, 60);
    root = tree.insert(root, 80);

    cout << "Inorder before deletion: ";
    tree.inorder(root);
    cout << endl;

    root = tree.deleteNode(root, 50);

    cout << "Inorder after deletion of 50: ";
    tree.inorder(root);
    cout << endl;

    return 0;
}