class Solution {
public:
    ListNode* arrayToLinkedList(vector<int> &nums) {
        if(nums.size()==0) return nullptr;
        ListNode* head = new ListNode(nums[0] , nullptr , nullptr);
        ListNode* back = head;

        for(int i = 1 ; i<nums.size() ; i++){
            ListNode* temp = new ListNode(nums[i] , nullptr , back);
            back->next = temp;
            back = temp;

        }
        return head;

    }
};