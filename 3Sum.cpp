// Bruteforce approach || Time Complexity O(n^3 * log(uniqueTriplets))  | Space Complexity O(uniqueTriplets)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector <int>> s;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j= i+1;j < n;j++){
                for(int k=j+1; k < n ; k++){
                    cout << nums[i] << " " << nums[j] << " "  << nums[k] << endl;
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> trip = {nums[i], nums[j], nums[k]};
                        sort(trip.begin(),trip.end());
                        if(s.find(trip) == s.end()){
                           s.insert(trip);
                           ans.push_back(trip);
                        }
                    }
                }
            }
        }
        return ans;
    }
};

// Better Approach || Tc O(n^2 * log(uniqueTriplets)) | Sc O( uniqueTriplets + n)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> uniqueTriplets;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int target = -nums[i];
            set<int> s;

            for (int j = i + 1; j < n; j++) {
                int c = target - nums[j];

                if (s.find(c) != s.end()) {
                    vector<int> trip = {nums[i], nums[j], c};
                    sort(trip.begin(), trip.end());
                    uniqueTriplets.insert(trip);
                }
                s.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(uniqueTriplets.begin(),uniqueTriplets.end());
        return ans;
    }
};

// Optimal Approach || Tc O(n logn) | Sc O(uniqueTriplets)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if( i > 0 && nums[i] == nums[i-1]) continue;
            int j = i+1, k = n-1;
            
            while(j<k){
                int sum =nums[i] + nums[j] + nums[k];
                if(sum < 0){ j++; }
                else if(sum > 0){ k--; }
                else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                }
            }
        }
        return ans;
    }
};
