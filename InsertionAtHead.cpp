//just create a new node temp and create a class object of ListNode and pass X and head as next pointer
class Solution {
public:
    ListNode* insertAtHead(ListNode* &head, int X) {
        ListNode* temp = new ListNode(X , head);
        return temp;

    }
};