//  Total time:  O(n log n + m log n)
// Total space:  O(1) 
class Solution {
public:
    bool isPresent(vector<int>& nums, int target) { //O(log n)
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return true;
            if (nums[mid] > target) high = mid - 1; 
            else low = mid + 1;
        }
        return false;
    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        sort(nums.begin(), nums.end());  //  O(n log n)

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != NULL) {   // O(m log n)
            if (isPresent(nums, curr->val)) {
                prev->next = curr->next;
            } else {
                prev = curr;
            }
            curr = curr->next;
        }
        return dummy->next;
    }
};



//  Total time:  O(m+n)
// Total space:  O(n) 

class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        unordered_set<int> s;
        for(int i: nums) s.insert(i);  // O(n)

         ListNode* prev = dummy;
         ListNode* curr = head;

         while(curr!=NULL){  // O(m)
            if(s.count(curr->val)){
                prev->next = curr->next;
            }else{
                prev = curr;
            }
            curr = curr->next;
         }
         return dummy->next;

    }
};
