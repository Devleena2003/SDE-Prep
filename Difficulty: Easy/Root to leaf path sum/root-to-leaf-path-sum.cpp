/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution {
  public:
  bool solve(Node*root, int target, int sum){
      if(!root) return false;
     sum+=root->data;
    if (!root->left && !root->right && sum == target) {
          return true;
      }
   return  solve(root->left,target,sum)
    || solve(root->right,target,sum);
  }
   
    bool hasPathSum(Node *root, int target) {
        // Your code here
   int sum=0;
   if(!root && target!=0) return false;
   if(root->left==NULL && root->right==NULL && root->data==target) return true;
   return solve(root,target,sum);
    
    }
};