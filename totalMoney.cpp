
// time: O(1) || space: O(1)
class Solution {
public:
    int totalMoney(int n) {
        int term = n/7;  // complete weeks
        int first = 28;  
        int last = first + (term - 1) * 7;  
        int result = term * (first + last)/2; // ap formula for nth term

        // for remaining days
        int remainingDay = n%7;   // remaining day in final week
        int first_term = term+1;
        int last_term = first_term + (remainingDay - 1) * 1;
        
        result += remainingDay * (first_term + last_term)/2;
         
        return result;
    }
};


// time: O(1) || space: O(1)
class Solution {
public:
    int totalMoney(int n) {
        int term = n/7;  // no of Complete Weeks
        int first = 28;
        int last = first + (term - 1) * 7; // Ap formula for nth term

        int result = term * (first + last)/2;  // sum of nth term


            final week for remaining days
        int start_money = term+1;
        for(int day = 1; day <= n%7; day++){
            result += start_money;
            start_money++;
        }
        return result;
    }
};


// time: O(n) || space: O(1)
class Solution {
public:
    int totalMoney(int n) {
       int start_monday = 1;
       int total = 0;

       while(n>0){
        int money = start_monday;
         for(int i=1;i<=min(n,7);i++){
           total += money;
            money++;
         }
        n = n-7;
        start_monday++;
       }
        return total;
    }
};
