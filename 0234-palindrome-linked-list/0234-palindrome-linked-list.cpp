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
ListNode* reverse(ListNode*head){
    ListNode*prev=NULL;
    ListNode*curr=head;
    while(curr){
        ListNode*nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        // base case if only one node or zero node
        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* secondh=reverse(slow);
        ListNode* firsth=head;
        while(secondh){
            if(firsth->val!=secondh->val){
                return false;
            }
            firsth=firsth->next;
            secondh=secondh->next;
        }
        return true;
        }  
      
    };