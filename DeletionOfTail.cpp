/*
1.so we have to remove tail so wewill traverse until second last node
2. For this we come up with logic that temp->next->next != nullptr as this condtion satifies we will go to know that we are standing at second last node
3. we move our temp until this conditon fails
4. the moment it fails we remove temp->next which is last node and make temp->next = nullptr which tell this node is last node now
*/
class Solution {
public:
    ListNode* deleteTail(ListNode* &head) {
        if(head==NULL || head->next == NULL) return NULL;
        ListNode* temp = head;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        return head;

    }
};
