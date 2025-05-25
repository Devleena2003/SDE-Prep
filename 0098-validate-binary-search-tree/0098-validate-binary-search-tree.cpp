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
bool isValid(TreeNode* root, long long min, long long max){
      if(root==NULL) return true;
    if(root->val>min && root->val<max) 

return isValid(root->left,min, root->val) && isValid(root->right,root->val,max);
else return false;
}
    bool isValidBST(TreeNode* root) {
       long long int min = -1000000000000, max = 1000000000000;
       return isValid(root,min,max);
    }
};