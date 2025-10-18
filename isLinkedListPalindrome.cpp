// optimal without extra space
class Solution {
public:
    ListNode* reverseList(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* current = head;
        ListNode* prev = NULL;

        while(current!=NULL){
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current= next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
       ListNode* slow = head;
       ListNode* fast = head;
       ListNode* prev = head;

       while(fast != NULL  && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
       }

      if(fast) slow = slow->next;
       

       prev->next = reverseList(slow);
        slow = prev->next;
        fast = head;

        while(slow != NULL){
            if(slow->val != fast->val) return false;
            slow = slow->next;
            fast = fast->next;
        }

        return true;
    }
};

// using extra space 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;

        while(temp!= NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int st = 0;
        int end = arr.size()-1;
        while(st<=end){
            if(arr[st] != arr[end]) return false;
            st++;end--;
        }
        return true;
    }
};
