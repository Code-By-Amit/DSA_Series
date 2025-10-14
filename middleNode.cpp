class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         ListNode* slow = head;
         ListNode* fast = head;
         while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
         }
         return slow;
    }
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         ListNode* temp = head;
         int size = 0;
         while(temp != NULL){
            size++;
            temp = temp->next;
         }

         temp = head;
         int mid = size/2;
         for(int i=0; i<mid; i++){
            temp = temp->next;
         }
         return temp;
    }
};
