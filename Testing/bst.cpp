#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// TreeNode class
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

// BST class for building the tree
class BST {
public:
    TreeNode* root;

    BST() : root(nullptr) {}

    TreeNode* buildTree(const vector<int>& nodes) {
        if (nodes.empty() || nodes[0] == -1) return nullptr;

        root = new TreeNode(nodes[0]);
        queue<TreeNode*> q;
        q.push(root);
        int i = 1;

        while (!q.empty() && i < nodes.size()) {
            TreeNode* current = q.front();
            q.pop();

            if (i < nodes.size() && nodes[i] != -1) {
                current->left = new TreeNode(nodes[i]);
                q.push(current->left);
            }
            i++;

            if (i < nodes.size() && nodes[i] != -1) {
                current->right = new TreeNode(nodes[i]);
                q.push(current->right);
            }
            i++;
        }

        return root;
    }
};

// Solution class to find kth largest
class Solution {
private:
    int count;
    int result;

    void reverseInorder(TreeNode* node, int k) {
        if (!node || count >= k) return;

        reverseInorder(node->right, k);

        count++;
        if (count == k) {
            result = node->val;
            return;
        }

        reverseInorder(node->left, k);
    }

public:
    int findKthLargest(TreeNode* root, int k) {
        count = 0;
        result = -1;
        reverseInorder(root, k);
        return result;
    }
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> nodes(n);
        for (int i = 0; i < n; ++i) {
            cin >> nodes[i];
        }

        int k;
        cin >> k;

        BST bst;
        TreeNode* root = bst.buildTree(nodes);

        Solution solver;
        cout << solver.findKthLargest(root, k) << endl;
    }

    return 0;
}
