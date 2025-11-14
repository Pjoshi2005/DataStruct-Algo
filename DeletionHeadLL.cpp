class Solution {
public:
    ListNode* deleteHead(ListNode* &head) {
        //if null return head
        if(head==NULL) return head;
        //assign head to temp
        ListNode* temp = head;
        //move head to head next means just move head to right
        head = head->next;
        //now head is at 2nd place at first there is temp without head so delete temp
        delete temp;
        return head;

    }
};