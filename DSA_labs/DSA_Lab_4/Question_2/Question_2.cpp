#include <iostream>
using namespace std;

// Class definition for a Node in the BST
class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a node
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Class definition for the Binary Search Tree
class BST {
private:
    Node* root;

    // Helper function to insert a node in the BST
    Node* insert(Node* node, int data) {
        // TODO: Implement the insert function
    }

    // Helper function to find the minimum value node in a subtree
    Node* findMin(Node* node) {
        // TODO: Implement the findMin function
    }

    // Helper function to find a node with a given value
    Node* findNode(Node* node, int data) {
        // TODO: Implement the findNode function
    }

public:
    // Constructor to initialize the root of the BST
    BST() {
        root = nullptr;
    }

    // Public function to insert a node in the BST
    void insert(int data) {
        root = insert(root, data);
    }

    // Function to find the in-order successor of a given node
    int findInOrderSuccessor(int data) {
        // TODO: Implement the findInOrderSuccessor function
    }
};

// Main function to execute the program
int main() {
    int n, target;
    cin >> n;

    BST tree;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        tree.insert(val);
    }

    cin >> target;

    int successor = tree.findInOrderSuccessor(target);
    if (successor != -1) {
        cout << successor << endl;
    } else {
        cout << "-1" << endl;
    }
#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node
class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(NULL), right(NULL) {}
};

class BinaryTree {
public:
    TreeNode* root = NULL;

    void make_binary_tree_from_array(int* arr, int size) {
        if (size == 0 || arr[0] == -1) {  // Handling empty or invalid root case
            this->root = NULL;
            return;
        }

        root = new TreeNode(arr[0]);  // Create the root node
        queue<TreeNode*> q;
        q.push(root);

        int i = 1;
        while (!q.empty() && i < size) {
            TreeNode* current = q.front();
            q.pop();

            // Left child
            if (i < size && arr[i] != -1) {
                current->left = new TreeNode(arr[i]);
                q.push(current->left);
            }
            i++;

            // Right child
            if (i < size && arr[i] != -1) {
                current->right = new TreeNode(arr[i]);
                q.push(current->right);
            }
            i++;
        }
    }

    // Helper function to calculate maximum height and check balance
    int Max_height(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int lh = Max_height(root->left);
        int rh = Max_height(root->right);

        if (lh == -1 || rh == -1) {
            return -1;
        }

        if (abs(lh - rh) > 1) {
            return -1;
        }

        return 1 + max(lh, rh);
    }

    // Function to check if the tree is balanced
    bool isBalanced(TreeNode* root) {
        return Max_height(root) != -1;  // Return true if the tree is balanced
    }
};

int main() {
    int n;
    std::cin >> n;

    if (n == 0) {
        std::cout << "true" << std::endl;  // Empty tree is balanced
        return 0;
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    BinaryTree tree;
    tree.make_binary_tree_from_array(arr.data(), n);

    std::cout << (tree.isBalanced(tree.root) ? "true" : "false") << std::endl;

    return 0;
}

}