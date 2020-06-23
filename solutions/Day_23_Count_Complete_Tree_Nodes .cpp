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
int ans(TreeNode* root)
{
    if(!root)return 0;
    return 1+ans(root->left)+ans(root->right);
}
class Solution {
public:
    int countNodes(TreeNode* root) {
        return ans(root);
    }
};
