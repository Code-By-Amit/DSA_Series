// TC: O(n) n= numBottel || SC: O(1)
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int total = numBottles;
        int emptyBottel = numBottles;
        numBottles = 0;
        while(emptyBottel>= numExchange){
            emptyBottel -= numExchange; // trade kiya to 1 full bottel mila
            total+=1;                   // 1 full bottel drunk so total me ek plus kiya
            emptyBottel++;              // 1 bottel drunk so it became empty 
            numExchange+=1;             // as condition excange rate increase in every trade
        }
        return total;
    }
};
