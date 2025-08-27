/*
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
class Solution {
  public:
vector<int> reverseLevelOrder(Node *root) {
        // code here
       queue<Node*>q;
       q.push(root);
       vector<int>ans;
       while(!q.empty()){
           Node* node=q.front();
          q.pop();
          ans.push_back(node->data);
          
           if(node->right){
               q.push(node->right);
           }
            if(node->left){
               q.push(node->left);
           }
          
         
       }
       reverse(ans.begin(),ans.end());
     return ans;  
    }
};