/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:

    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int help(Node *node) {
     if(node==NULL) return 0;
     int ls=help(node->left);
     int rs=help(node->right);
     int oldVal=node->data;
     node->data=ls+rs;
     return node->data+oldVal;
     
     
    }
      void toSumTree(Node* node) {
        help(node);  // just call the helper
    }
};