// one pass using slow - fast pointer approach 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == NULL && n == 1)
            return NULL;
         ListNode* dummy = new ListNode(-1);
         dummy->next = head;
         ListNode* slow = dummy;
         ListNode* fast = head;

            for(int i=0; i<n;i++){
                fast = fast->next;
            }
         while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
         }

         ListNode* nodeToDelete = slow->next;
         if(nodeToDelete->next)slow->next = slow->next->next;
        else slow->next = NULL;
        delete nodeToDelete;
  
        return dummy->next;
    }
};


// two pass: one is for length and second is n-length;
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == NULL && n == 1)
            return NULL;
        ListNode* temp = head;
        int listLength = 0;
        while (temp != NULL) {
            temp = temp->next;
            listLength++;
        }

        temp = head;
        ListNode* prev = head;
        for (int i = 0; i < listLength - n; i++) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == head) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        ListNode* nodeToDelete = temp;

       
        prev->next = temp->next;
        delete nodeToDelete;

        return head;
    }
};
