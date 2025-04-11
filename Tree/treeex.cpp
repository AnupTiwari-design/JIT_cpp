#include <iostream>
using namespace std;

class TreeNode {
    public:
        int data;
        vector<TreeNode*> children;
    
        TreeNode(int val) {
            data = val;
        }
    };




    
void printTree(TreeNode* root, int depth = 0) {
    if (root == nullptr) return;

    for (int i = 0; i < depth; i++) cout << "--";
    cout << root->data << endl;

    printTree(root->child1, depth + 1);
    printTree(root->child2, depth + 1);
    printTree(root->child3, depth + 1);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->child1 = new TreeNode(2);
    root->child2 = new TreeNode(3);
    root->child3 = new TreeNode(4);

    root->child1->child1 = new TreeNode(5);
    root->child1->child2 = new TreeNode(6);

    root->child2->child1 = new TreeNode(7);

    cout << "Tree structure:" << endl;
    printTree(root);

    return 0;
}