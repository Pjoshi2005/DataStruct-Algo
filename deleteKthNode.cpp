class Solution {
   public:
    ListNode* deleteKthNode(ListNode*& head, int k) {
        //check for edge cses one is for k =1 and other for null
        if (head == NULL) return NULL;
        if (k == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
//starts from 0 only otherwise if u wannna delete 3nd node it will delete 4th node
        int cnt = 0;
        //we have prev pointer to store previous node so that we can connect it to after the the deleteed node
        ListNode* temp = head;
        ListNode* prev = NULL;
// will run loop unitl we have Null value in temp
        while (temp != NULL) {
            cnt++;
            if (cnt == k) {
                //delete the node and connect previous node to next of temp
                prev->next = prev->next->next;
                delete temp;
                break;
            }
            //if not found k then move temp and prev but always store temp in prev so that prev will have context after temp move to next node
            prev = temp;
            temp = temp->next;
            
        };
        return head;
    };
};