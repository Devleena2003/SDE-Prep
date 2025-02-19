//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print nodes in a given linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
  Node* merge2Lists(Node* a, Node* b){
      if(a==NULL) return b;
      if(b==NULL) return a;
      if(a->data>b->data){
          b->next=merge2Lists(a,b->next);
          return b;
      }
    else{
          a->next=merge2Lists(a->next,b);
          return a;
      }
  }
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        if(arr.size()==0) return NULL;
        while(arr.size()>1){
            vector<Node*>newList;
            for(int i=0;i<arr.size();i+=2){
                if(i+1<arr.size()){
                    newList.push_back(merge2Lists(arr[i],arr[i+1]));
                } else{
                    newList.push_back(arr[i]);
                }
            }
            arr=newList;
        }
        
        return arr[0];
    }
};


//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        vector<Node*> v(n);

        for (int i = 0; i < n; i++) {
            string line;
            getline(cin, line);
            stringstream ss(line);

            Node* head = new Node(0);
            Node* temp = head;
            int x;
            while (ss >> x) {
                Node* newNode = new Node(x);
                temp->next = newNode;
                temp = temp->next;
            }
            v[i] = head->next;
        }

        Solution ob;
        Node* head = ob.mergeKLists(v);
        printList(head);
    }

    return 0;
}

// } Driver Code Ends