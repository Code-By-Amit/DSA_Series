class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode*  prev = NULL;
        ListNode*  first = head;
        ListNode* second = first->next;

        while(first != NULL && second != NULL){
            ListNode*  third = second->next;
            second->next = first;
            first->next = third;

            if(prev)prev->next = second;
            else head = second;

            prev = first;
            first = third;
           if(third) second = third->next;
           else second = NULL;
        }

        return head;
    }
};
