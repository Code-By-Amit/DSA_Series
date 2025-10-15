class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 == NULL || head2 == NULL){
            return head1 == NULL ? head2 : head1;
        }

            if(head1->val <= head2->val){
                head1->next = mergeTwoLists(head1->next, head2);
                return head1;
            }else{
                 head2->next = mergeTwoLists(head1, head2->next);
                return head2;
            }
    }
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        ListNode* temp = new ListNode(-1);

        while(head1 != NULL && head2 != NULL){
            if(head1->val <= head2->val){
                temp->next = head1;
                head1 = head1->next;
            }else{
                temp->next = head2;
                head2 = head2->next;
            }
            temp = temp->next;
        }

        if(head1 == NULL){
            temp->next = head2; 
        }else{
            temp->next = head1;
        }

        return temp->next;
    }
};
