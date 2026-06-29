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
        ListNode*Reverse(ListNode*curr,ListNode*prev){
        if(curr==NULL){
            return prev;
        }
        ListNode* front=curr->next;
        curr->next=prev;
         return Reverse(front,curr);
        }
    ListNode* doubleIt(ListNode* head) {
        head=Reverse(head,NULL);
        ListNode *curr =head;
        ListNode* head1=new ListNode(0);
        ListNode* tail=head1;
        int product,carry=0;
        while(curr){
            product=curr->val*2+carry;
            tail->next=new ListNode(product%10);
            tail=tail->next;
            curr=curr->next;
            carry=product/10;
        }
          while(carry){
            tail->next=new ListNode(carry%10);
            tail=tail->next;
            carry/=10;
        }
        head1=Reverse(head1->next,NULL);
        return head1;

        
        
    }
};