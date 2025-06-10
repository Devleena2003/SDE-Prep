/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* reverse(ListNode* head){
    if(head->next==NULL) return head;
    ListNode* curr=head;
    ListNode* prev=NULL;
    while(curr){
     ListNode* fw=curr->next;
     curr->next=prev;
     prev=curr;
     curr=fw;
    }
    return prev;
}
    void reorderList(ListNode* head) {
         if (!head || !head->next || !head->next->next) return;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
       ListNode* p2=reverse(slow->next);
       slow->next=NULL;
        ListNode* p1=head;
       
        while(p2){
           ListNode*temp1=p1->next;
           ListNode* temp2=p2->next;
           p1->next=p2;
           p2->next=temp1;
           p1=temp1;
           p2=temp2;
        }
       
    }
};