 // optimal 
// TC: O(n+m) || SC : O(1)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
     
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA != tempB){
            tempA = tempA!=NULL? tempA->next : headB;
            tempB = tempB!=NULL? tempB->next : headA;
        }
     
        return tempA;
    }
};

// better
// TC: O(n+m) || SC : O(1)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = headA;
        int lenA = 0;

        while(temp != NULL){
            lenA++;
            temp = temp->next;
        }
        
        temp = headB;
        int lenB = 0;
        while(temp!=NULL){
           lenB++;
            temp = temp->next;
        }
        int diff = abs(lenA - lenB);

        ListNode* tempA = headA;
        ListNode* tempB = headB;

        if(lenA > lenB){
            while(tempA != NULL && diff > 0){
                 tempA = tempA->next;
                 diff--;
            }
        }else{
            while(tempB != NULL && diff > 0){
                tempB = tempB->next;
                diff--;
            } 
        }

        while(tempA != NULL || tempB != NULL){
            if(tempA == tempB) return tempA;
            tempA= tempA->next;
            tempB = tempB->next;
        }

        return NULL;
    }
};


// bruteforce 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set <ListNode*> s;
        ListNode* temp = headA;

        while(temp != NULL){
            s.insert(temp);
            temp = temp->next;
        }

        temp = headB;
        while(temp!=NULL){
            if(s.find(temp) != s.end()){
                return temp;
            }
            temp = temp->next;
        }

        return NULL;
    }
};
