
class Solution {
   public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        ListNode* fast = head;
        ListNode* slow = head;

        //move fast same as nth node we hae to delete
        for (int i = 0; i < n; i++) {
            // new edgecase what if node is one but n = 2(which ofc doesnt exist)
            if(fast==NULL) return head; // fast becomes null before iteration straigh up return head;
            fast = fast->next;
        }
    // if fast == null it means n th node is head and our fast pointer pointing to null ..also never write this statement after while loop as when while loop terminated our fast will be at last node which breaks the logic 
        if (fast == NULL) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        //using slow pointer and fast pointer move till fast reaches at last and slow reaches just before the node which we wanna delete

            while (fast->next != NULL) {
                slow = slow->next;
                fast = fast->next;
            }
        
// adjust the pointer and return
            ListNode* deleteNode = slow->next;
            slow->next = slow->next->next;
            delete deleteNode;
            return head;
        }
    };