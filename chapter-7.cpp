#include <iostream>
#include <climits>
#include <vector>

using namespace std;

bool isPowerOfTwo(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}

int reverseInteger(int n)
{
    int ans = 0;
    while (n > 0)
    {
        int rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }
    return ans;
}

int reverse(int x) {
    long ans = 0;
    bool isNagative = x<0;
    x = abs(x);
    while(x>0){
        int lastDigit = x%10;
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && lastDigit > 7)) return 0;
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && lastDigit < -8)) return 0;
        ans = ans * 10 + lastDigit;
        x/=10;
    }
    return isNagative ? -ans : ans;
}

int main()
{
    // int a = 4;
    // int b = 8;

    // cout << reverse(1534236469) << endl;
    // cout << "( a & b ): " << (a & b) << endl;
    // cout << "( a | b ): " << (a | b) << endl;
    // cout << "( a ^ b ): " << (a ^ b) << endl;
    // cout << "( ~a ): " << (~a) << endl;
    // cout << "( a << 1): " << (a << 1) << endl;
    // cout << "( a >> 1): " << (a >> 1) << endl;

    // int n = 32;
    // int pow = 1;

    // while (pow <= n)
    // {
    //     if (pow == n)
    //     {
    //         cout << n << " is a power of 2" << endl;
    //         return 0;
    //     }
    //     pow *= 2;
    // }

    // cout << n << " is not a power of 2" << endl;

    // if(isPowerOfTwo(32)){
    //     cout << " 32 is a power of 2." << endl;
    // }else{
    //     cout << "32 is not a power of 2." << endl;
    // }

    // cout << "Reverse of 128 is : " << reverseInteger(128) << endl;
    return 0;
}