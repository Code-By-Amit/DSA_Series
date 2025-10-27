class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prevRowDevices = 0;
        int beams = 0;
        for(int row =0; row < bank.size(); row++){
            int currRowDevices = 0;
            for(int col=0; col<bank[row].size(); col++){
                if(bank[row][col] == '1'){
                    currRowDevices++;
                }
            }
            if(currRowDevices > 0){
                beams = beams + (prevRowDevices*currRowDevices);
                prevRowDevices = currRowDevices;
            } 
        }
        return beams;
    }
};
