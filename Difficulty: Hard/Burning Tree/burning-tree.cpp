//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  void find(Node* root, int target, Node* &BurnNode){
      if(root==NULL) return ;
      if(root->data==target){
          BurnNode=root;
          return ;
      }
      find(root->left,target, BurnNode);
      find(root->right,target,BurnNode);
  }
  
  int height(Node* root){
      if(!root) return 0;
      return 1+max(height(root->left),height(root->right));
  }
  
  int Burn(Node* root, int &timer, int target){
      if(!root) return 0;
      if(root->data ==target) return -1;
      int left=Burn(root->left,timer,target);
      int right=Burn(root->right,timer,target);
      if(left<0){
          timer=max(timer,abs(left)+right);
          return left-1;
      }
      if(right<0){
          timer=max(timer,abs(right)+left);
          return right-1; 
      }
      // if both side +ve
      return 1+max(left,right);
  }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        int timer=0;
        Burn(root,timer,target);
        //will get the value of upperside from target;
        Node* BurnNode=NULL;
        //for lower side
        //first find the target pos
        find(root,target,BurnNode);
        //cal height
        int high=height(BurnNode)-1;
        return max(timer,high);
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends