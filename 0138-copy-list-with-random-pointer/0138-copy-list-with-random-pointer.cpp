/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    // Node* find(Node* curr1, Node* curr2, Node* X) {

    //     if (X == NULL) {
    //         return NULL;
    //     }

    //     while (curr1 != X) {
    //         curr1 = curr1->next;
    //         curr2 = curr2->next;
    //     }

    //     return curr2;
    // }

    Node* copyRandomList(Node* head) {

        if (head == NULL)
            return NULL;

        Node* head2 = new Node(0);
        Node* tail = head2;
        Node* temp = head;

        while (temp) {
            tail->next = new Node(temp->val);
            tail = tail->next;
            temp = temp->next;
        }

        tail = head2;
        head2 = head2->next;
        delete tail;
         // this approach has time complexity of n2 
        // assign random pointer
        tail = head2;
        temp = head;

        // while (temp) {
        //     tail->random = find(head, head2, temp->random);
        //     tail = tail->next;
        //     temp = temp->next;
        // }

        // we can use unorderd map 
        unordered_map<Node*,Node*>m;
        while(temp){
            m[temp]=tail;
            temp=temp->next;
            tail=tail->next;
        }
        temp=head;
        tail=head2;
        while(temp){
            tail->random=m[temp->random];
            tail=tail->next;
            temp=temp->next;
        }

        return head2;
    }
};