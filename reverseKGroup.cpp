class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;
        while(count < k){
            if(temp == NULL) return head;
            count++;
            temp = temp->next;
        }

        ListNode* previousNode = temp;
        previousNode = reverseKGroup(temp,k);

        temp = head;
        count = 0;
         while(count < k){
            ListNode* next = temp->next;
            temp->next = previousNode;
            previousNode = temp;
            temp = next;
            count++;
         }

        return previousNode;

    }
};
