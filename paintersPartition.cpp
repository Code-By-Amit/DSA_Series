
bool isPossible(vector<int> boards,int m, int maxAllowedTime){  // TC O(n)
    int painter =1; int time =0;
    for(int i; i<boards.size();i++){
        if( time+boards[i] <= maxAllowedTime){
            time+=boards[i];
        }else{
            painter++;
            time = boards[i];
        }
    }
    return painter <= m ? true : false;
}

int findLargestMinDistance(vector<int> &boards, int m) // TC O(log(sum) * n)
{
    //    Write your code here.
    int n = boards.size();
    if(m>n) return -1;
    int sum = 0;
    int maxVal = 0;
    for(int i=0; i<boards.size(); i++){     // O(n)
        maxVal = max(maxVal,boards[i]);
        sum += boards[i];
    }

    int st = maxVal;
    int end = sum;
    int ans = -1;
    
    while(st<=end){              // log(sum) * n , Because of Loop Runs On Range of st and end
       int mid = st + (end-st)/2;
        if(isPossible(boards,m,mid)){    // Left 
            ans = mid;
            end = mid -1;
        }else {                      // Right 
            st = mid + 1;
        }

    }

    return ans;

}
