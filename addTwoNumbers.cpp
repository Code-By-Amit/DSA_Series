class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* num1 = l1;
        ListNode* num2 = l2;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* curr = dummyNode;
        int carry = 0;

        while(num1 || num2 || carry){
            int v1 = num1 != NULL ? num1->val : 0;
            int v2 = num2 != NULL ? num2->val : 0;
            int total = v1 + v2 + carry;
            int digit = total % 10;
            carry = total/10;

            curr->next = new ListNode(digit);
            curr = curr->next;

            if(num1 != NULL) num1 = num1->next;
            if(num2 != NULL) num2 = num2->next;
        }
        
        return dummyNode->next;
    }
};
