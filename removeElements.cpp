class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) { 
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;

        while(curr != NULL){
            ListNode* nodeToDelete = NULL;
            if(curr->val == val){ 
               prev->next = curr->next;
               nodeToDelete = curr;
            }else{
              prev = curr;
            }
            curr = curr->next;
            if(nodeToDelete) delete nodeToDelete;
        }
        return dummy->next;
    }
};
