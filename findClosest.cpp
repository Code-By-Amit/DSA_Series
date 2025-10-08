class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xSteps = abs(x-z);
        int ySteps = abs(y-z);
        if(xSteps < ySteps) return 1;
        else if(xSteps > ySteps) return 2;
        return 0;
    }
};
