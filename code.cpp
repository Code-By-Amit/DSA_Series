#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinary(int decNum)
{

    int ans = 0;
    int pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int binaryToDecimal(int binary)
{
    int ans = 0, pow = 1;
    while (binary > 0)
    {
        int rem = binary % 10;
        ans = ans + rem * pow;

        binary = binary / 10;
        pow = pow * 2;
    }
    return ans;
}

int main()
{
    cout << "Decimal to Binary: " << decimalToBinary(84) << endl;
    cout << "Binary to Decimal: " <<  binaryToDecimal(1010100);
    return 0;
}