// TC: O(n) || SC: O(1)
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxRight = arr[n-1];
        arr[n-1] = -1;

        for(int i =n-2; i>=0; i--){
            int current_element = arr[i];
            arr[i] = maxRight;
            maxRight = max(current_element, maxRight);
        }
        
        return arr;
    }
};

// TC: O(n^2) || SC: O(1)

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        for(int i =0; i<n-1; i++){
             int greatest = INT_MIN;
             for(int j =i+1; j<n; j++){
                greatest = max(greatest,arr[j]);
            }
            arr[i] = greatest;
        }
        arr[n-1] = -1;
        return arr;
    }
};
