class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num <=1) return true;
        if(num <=3) return false;
    
        int start = 1;
        int end = num/2;

        while(start <= end){
            long  mid = start + (end-start)/2;
            long square = mid * mid;
            if(square == num) return true;
            else if(square > num) end = mid -1;
            else if(square < num ) start = mid + 1;
        }
        return false;
    }
};
