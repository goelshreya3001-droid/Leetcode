class Solution {
public:
    ListNode* Reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr){
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == NULL || left == right){
            return head;
        }

        ListNode *bleft = NULL;
        ListNode *leftn = head;
        ListNode *rightn = head;

        for(int i = 1; i < left; i++){
            bleft = leftn;
            leftn = leftn->next;
        }

        rightn = leftn;

        for(int i = left; i < right; i++){
            rightn = rightn->next;
        }

        ListNode *aright = rightn->next;

        rightn->next = NULL;

        ListNode *newhead = Reverse(leftn);

        if(bleft)
            bleft->next = newhead;
        else
            head = newhead;

        leftn->next = aright;

        return head;
    }
};