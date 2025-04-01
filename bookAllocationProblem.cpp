class Solution {
  public:
    bool isValid(vector<int> arr, int m,int n, int maxAllowedPages){
        int stu = 1,pages =0;
        for(int i=0;i < n; i++){
            
            if(arr[i] > maxAllowedPages) return false;
            
            if(pages + arr[i] <= maxAllowedPages){
                pages += arr[i];
            }else{
                stu++;
                pages = arr[i];
            }
        }
        return stu <= m ? true : false;
    }
    
    int findPages(vector<int> &arr, int m) {
        
        int n = arr.size();
        if(m>n) return -1;
        int sum = 0;
        
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        
        int st = 0;
        int end = sum;
        int ans = -1;
        
        while(st <= end){
            int mid = st + (end-st)/2;
            if(isValid(arr, m, n, mid)){    // Left Search Space
                ans = mid;
                end = mid -1;
            }else{                            // Right Search Space
                st = mid + 1;
            }
        }
        return ans;
        
    }
};
