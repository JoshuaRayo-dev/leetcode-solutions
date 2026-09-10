/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root != nullptr) preorderTraversalAux(root, res);
        return res;
    }

    void preorderTraversalAux(TreeNode* node, vector<int>& vec) {
        vec.push_back(node->val);
        if (node->left != nullptr) preorderTraversalAux(node->left, vec);
        if (node->right != nullptr) preorderTraversalAux(node->right, vec);
    }
};