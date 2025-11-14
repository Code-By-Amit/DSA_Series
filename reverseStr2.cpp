class Solution {
public:
    void reverse(int left, int right, string &str){
        while(left < right){
            swap(str[left],str[right]);
            left++;
            right--;
        }
    }

    string reverseStr(string s, int k) {
        
        int idx = 0;
        int n = s.size();

        while(idx < n){
            int remaining = n - idx;
            if(remaining < k){
                reverse(idx, n-1, s);
                break;
            }
            else{
                reverse(idx, idx + k-1, s);
                idx+= 2*k;
            }
          
        }

        return s;
    }
};
