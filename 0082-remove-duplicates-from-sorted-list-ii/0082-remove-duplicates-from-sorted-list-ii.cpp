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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode* dummy=new ListNode(0);
       dummy->next=head;
    
       ListNode* prev=dummy;
       ListNode* curr=head;
       while(curr){
        if(curr->next!=NULL  && curr->val ==curr->next->val){
            // store that value in duplicate
            int dup=curr->val;
            while(curr && curr->val==dup){
                // unique values 
                curr=curr->next;
            }
                prev->next=curr;
            
        }
        // no duplicates
        else{
            prev=curr;
            curr=curr->next;
        }
       }
       return dummy->next;
    }
};