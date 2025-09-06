/* A binary tree Node

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
 */
class Solution {
  public:
    vector<vector<int>> levelOrder(Node* root) {
        // code here
        vector<vector<int>>ans;
        
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
          int size=q.size();
          vector<int>bfs;
          for(int i=0;i<size;i++){
              Node* node=q.front();
              bfs.push_back(node->data);
              q.pop();
              if(node->left) q.push(node->left);
              if(node->right) q.push(node->right);
              
          }
          ans.push_back(bfs);
        }
        return ans;
    }
};