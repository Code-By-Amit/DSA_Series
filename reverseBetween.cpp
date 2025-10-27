
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || head->next == NULL)
            return head;
         
          ListNode* dummy = new ListNode(0);   // yaha dummy node use kiya taki left = 1 case bhi easily handle ho jaye
            dummy->next = head;
            ListNode* prevLeft = dummy;

        for (int i = 1; i < left; i++) {
            prevLeft = prevLeft->next;
        }

        ListNode* prev = NULL;
        ListNode* curr = prevLeft->next;
        
        for(int i=left; i<=right;i++) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next; 
        }

       // prevLeft->next ab reversal ka tail ban chuka hai
       // us tail ko reversal ke baad wale part se jod do
       prevLeft->next->next = curr; 

      // prevLeft ko ab reversed segment ke naye head se jod do
       prevLeft->next = prev;  
      
        return dummy->next;
    }
};
