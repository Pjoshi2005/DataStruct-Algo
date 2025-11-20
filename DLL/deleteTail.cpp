 ListNode* deleteTail(ListNode* head) {
        if(head== NULL || head->next == NULL) return NULL;

        ListNode* temp = head;
        ListNode* back = head;
        
        while(temp->next!=NULL){
            temp = temp->next;
        }
        
        back = temp->prev;
        back->next = nullptr;
        temp->next = nullptr;
        delete temp;
        return head;


    }