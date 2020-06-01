//pprockys;
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
    TreeNode* fun(TreeNode* root)
    {
        if(root==NULL)
            return root;
         root->left=fun(root->left);
         root->right=fun(root->right);
         swap(root->left,root->right);
         return root;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        return fun(root);
    }
};
