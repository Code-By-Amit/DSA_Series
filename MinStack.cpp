// space complexity O(n) and time is O(1)
class MinStack {
public:
    stack<long long int> s;
    long long int minVal;
    MinStack() {
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(val);
            minVal = val;
        }else{
            if(val<minVal){
                s.push((long long)2*val-minVal);
                minVal = val ;
            }else s.push(val);
        }
    }
    
    void pop() {
        if(s.top() < minVal){
            minVal = 2*minVal - s.top();
        }
        s.pop();
    }
    
    int top() {
        if(s.top() < minVal){
            return  minVal;
        }else return s.top();
    }
    
    int getMin() {
        return minVal;
    }
};


// easy but space complexity O(2*n) and time is O(1)
class MinStack {
public:
    stack<pair<int,int>> s;
    MinStack() {
    }
    
    void push(int val) {
      int currentMin = s.empty() ? val : min(val, s.top().second);
      s.push({val, currentMin});
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
       return s.top().first;
    }
    
    int getMin() {
       return s.top().second;
    }
};
