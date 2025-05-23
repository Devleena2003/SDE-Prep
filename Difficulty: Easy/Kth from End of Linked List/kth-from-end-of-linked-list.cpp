/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
       int c=0;
       Node* temp=head;
       //countnmg the total nodes present in the ll
       while(temp!=NULL) {
           c++; //9
           temp=temp->next;
       }
       
       if(c<k) return -1;
       temp=head;
       while(temp!=NULL){
          if(c==k){
              return temp->data;
          } 
          temp=temp->next;
          c--; 
       }
       return -1;
    }
};