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
    ListNode* reverseList(ListNode* head) {
        // brute force approach is using stack as an extra space as stack is lifo so after putting all the elemnts by traversing into stack then traverse the stack from top to bottom and add in ll in similar manner . tc -o(n) sc =o(n)
      ListNode* temp=head;
      ListNode* prev=NULL;
      while(temp!=NULL){
        ListNode*front =temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
      }
      
    return prev;  
    }
};