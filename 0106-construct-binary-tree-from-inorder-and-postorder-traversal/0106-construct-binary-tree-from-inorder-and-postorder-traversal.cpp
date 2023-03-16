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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>mp;
        int n=inorder.size();
        for(int i=0;i<n;i++)
        {
            mp[inorder[i]]=i;
        }
        return construct(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
    }
    TreeNode *construct(vector<int>& inorder,int is,int ie,vector<int>& postorder,int pi,int pe,map<int,int>& mp)
    {
        if(is>ie || pi>pe)
            return NULL;
        TreeNode *root=new TreeNode(postorder[pe]);
       int inRoot=mp[postorder[pe]];
        int s=inRoot-is;
        root->left=construct(inorder,is,is+s-1,postorder,pi,pi+s-1, mp);
        root->right=construct(inorder,inRoot+1,ie,postorder,pi+s,pe-1, mp);
        return root;
    }
};