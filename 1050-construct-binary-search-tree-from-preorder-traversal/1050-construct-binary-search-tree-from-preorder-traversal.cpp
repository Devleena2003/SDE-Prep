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
TreeNode* solve(int left, int right,vector<int>& preorder){
    if(left>right) return NULL;
    int index=right+1;
    for(int i=left+1;i<=right;i++){
        if(preorder[i]>preorder[left]) {
            index=i;
             break;
             }
    }
    TreeNode* root=new TreeNode(preorder[left]);
    root->left=solve(left+1, index-1,preorder);
    root->right=solve(index,right,preorder);

    return root;

}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return solve(0, preorder.size()-1, preorder);
    }
};