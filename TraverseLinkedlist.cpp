class Solution 
public:
    vector<int> LLTraversal(ListNode *head) {
        //assign head to teamp 
        ListNode* temp = head;
        vector<int> ans;
        //traverse temp until u cant find null pointer and push vaue to ans and move temp to next
        while(temp!= nullptr){
            ans.push_back(temp->val);
            temp =temp->next;
        }
        return ans;


    }
};

