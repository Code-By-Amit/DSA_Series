// Time Complexity: O(n + k) ≈ O(n) (since k = 100 constant)
// Space Complexity: O(n + k) ≈ O(n)

int heightChecker(vector<int>& heights) {
    int n = heights.size();
    vector<int> freq(101,0);   // freq array banaya
    vector<int> expected;
    
    for(int i:heights) freq[i]++;   // O(n)
    
    for(int i=0;i<freq.size();i++){ // O(k)
        for(int j=0;j<freq[i];j++)  // total O(n)
            expected.push_back(i);
    }

    int count = 0;
    for(int i=0; i<heights.size();i++){ // O(n)
        if(heights[i] != expected[i]) count++;
    }
    return count;
}
