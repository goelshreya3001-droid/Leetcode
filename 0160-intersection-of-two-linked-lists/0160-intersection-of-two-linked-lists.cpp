/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=0,lenB=0;
        ListNode* temp=headA;
        while(temp){
            lenA++;
            temp=temp->next;
        }
        temp=headB;
        while(temp){
            lenB++;
            temp=temp->next;
        }
        ListNode*p1=headA;
        ListNode*p2=headB;
        // skip extra nodes in A 
        while(lenA>lenB){
            p1=p1->next;
            lenA--;
        }
        // or skip extra nodes of b
        while(lenA<lenB){
            p2=p2->next;
            lenB--;
        }
        while(p1&&p2){
            if(p1==p2)//we are not comparing value but we are comparing address
                return p1;
            p1=p1->next;
            p2=p2->next;
            }
        
    return NULL;


        
    }
};