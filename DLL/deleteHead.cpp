class Solution {
public:
    ListNode * deleteHead(ListNode* head) {
        if(head==NULL || head->next == NULL) return NULL;
        ListNode* temp = head;

    head = head->next;
    temp->next = nullptr;
    head->prev = nullptr;
    delete temp;
    return head;


    }
};