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
    int sumNumbers(TreeNode* root) {
       int currsum=0;
       return f(root,currsum);
    }
    int f(TreeNode *root,int currsum)
    {
        if(root==NULL) //BC 1
            return 0;
        currsum=currsum*10+root->val;
        if(root->left==NULL &&root->right==NULL) //leaf node BC 2
            return currsum;                    
        int l=f(root->left,currsum);
        int r=f(root->right,currsum);
        return l+r;
    }
};