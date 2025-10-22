// TC: O(n) || Sc O(1)
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        if(k==0) return head;
        int size = 0;
        ListNode* temp = head;
        
        while(temp!=NULL){
            size++;
            temp = temp->next;
        }

        int rotate = k%size;
        if(rotate == 0) return head;

        ListNode* slow = head;
        ListNode* fast = head;

        for(int i=0; i<rotate;i++) fast = fast->next; // move k steps ahead
        

        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }

        ListNode* newHead = slow->next;
        slow->next = NULL;
        fast->next = head;

        return newHead;
    }
};

// same time and space complexity 
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) return head;
        if (k == 0) return head;
        int size = 0;
        ListNode* temp = head;
        ListNode* lastNode = head;
        while (temp != NULL) {
            size++;
            lastNode = temp;
            temp = temp->next;
        }

        int rotate = k%size;
        if (rotate == 0) return head;
        temp = head;
        for (int i = 1; i <size-rotate; i++) {
            temp = temp->next;
        }

        ListNode* newHead = temp->next;
        temp->next = NULL;
        lastNode->next = head;
       
        return newHead;
    }
};
