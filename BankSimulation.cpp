class Bank {
public:
    vector<long long> balance;
    int n;
    
    Bank(vector<long long>& balance) {
        this->balance = balance;
        n = balance.size();
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(account1 > n || account2 > n) return false;
        if(balance[account1-1] < money ) return false;
        balance[account1-1]-=money;
        balance[account2-1]+=money;
        return true;
    }
    
    bool deposit(int acc, long long money) {
        if(acc > n) return false;
        balance[acc-1] += money;
        return true;
    }
    
    bool withdraw(int acc, long long money) {
         if(acc > n || balance[acc-1] < money ) return false;
         balance[acc-1]-= money;
         return true;
    }
};
