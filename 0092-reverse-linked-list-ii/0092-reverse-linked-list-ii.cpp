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

//function of reversing a LL iteratively
ListNode* reverse(ListNode* head){
    ListNode* temp=head;
    ListNode* prev=NULL;
    while(temp!=NULL){
        ListNode* curr=temp->next;
        temp->next=prev;
        prev=temp;
        temp=curr;
    }
    return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        //point left and right in LL
        int count=1;
        ListNode* prev=NULL;
        ListNode* current=head;
        while(count!=left){
         prev=current;
         current=current->next;
         count++;
        }
        ListNode* start=current;
        while(count!=right){
            current=current->next;
            count++;
        }
        //before reversing right->next=NULL
        ListNode* rest=current->next;
        current->next=NULL;
        //now reverse
        ListNode* newHead= reverse(start);
        if(prev!=NULL){
            prev->next=newHead;
        }
        current=newHead;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=rest;
        if(left==1) return newHead;
        return head;

    }
};