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
int burn (TreeNode* root, int &timer, int start){
    if(!root) return 0;
    if(root->val==start) return -1;
    int left=burn(root->left,timer,start);
    int right=burn(root->right,timer,start);
    if(left<0){
        timer=max(timer,abs(left)+right);
        return left-1;
    }
    if(right<0){
       timer=max(timer,abs(right)+left);
        return right-1; 
    }
    return 1+max(left,right);
}
int findHeight(TreeNode* root){
    if(root==NULL) return 0;
    int lh=findHeight(root->left);
    int rh=findHeight(root->right);
    return 1+max(lh,rh);
}
void find(TreeNode* root, int start, TreeNode* &burnNode){
if(!root) return ;
if(root->val== start) {
    burnNode=root;
    return ;
}
find(root->left, start,burnNode);
find(root->right,start,burnNode);
}
int amountOfTime(TreeNode* root, int start) {
        int timer=0;
        burn(root,timer, start);
        TreeNode* burnNode=NULL;
        find(root,start, burnNode);
        int height=findHeight(burnNode)-1;
        timer=max(timer,height);
        return timer;

    }
};