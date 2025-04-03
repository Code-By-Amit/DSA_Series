#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    // Write your code here
    int temp = num;
    int expo = (int)log10(num)+1;
    int ans = 0;
    while(temp>0){
        int digit = temp%10;
        ans += (int)pow(digit,expo);
        temp /= 10;
    }
    return ans==num;
}
