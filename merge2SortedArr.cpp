class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int index = m + n -1;
        int i = m-1;
        int j = n-1;

        while(i>=0 && j>=0){
            if(A[i] < B[j]){
                A[index--] = B[j--];
            }else{
                A[index--] = A[i--];
            }
        }
        while(j>=0){
            A[index--] = B[j--];
        }
    }
};
