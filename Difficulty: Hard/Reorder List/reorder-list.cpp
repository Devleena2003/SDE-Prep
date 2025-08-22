/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
  Node* reverse(Node* head){
      if(head==NULL || head->next==NULL) return head;
      Node* newHead=reverse(head->next);
      head->next->next=head;
      head->next=NULL;
      return newHead;
  }
    void reorderList(Node* head) {
        // Your code here
        //find mid of ll
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* temp=slow->next;
        slow->next=NULL;
        Node* left=head;
        Node* right=reverse(temp);
        while(right){
            Node* first=left->next;
            Node* sec=right->next;
            left->next=right;
            right->next=first;
            left=first;
            right=sec;
        }
        
    }
};