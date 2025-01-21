#include <bits/stdc++.h>
using namespace std;

// ****
// ****
// ****
// ****
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// *
// **
// ***
// ****
// *****

void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4
void print4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

// * * * *
// * * *
// * *
// *

void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// 1 2 3 4
// 1 2 3
// 1 2
// 1

void print6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

//     **
//    ****
//   ******
//  ********
// **********

void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i * 2 + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

//*******
// *****
//  ***
//   *

void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

//     *
//    ***
//   *****
//  *******
//  *******
//   *****
//    ***
//     *

void print9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i * 2 + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// *
// **
// ***
// ****
// ***
// **
// *

void print10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// 1
// 0 1
// 1 0 1
// 0 1 0 1

void print11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

// 1      1
// 12    21
// 123  321
// 12344321

void print12(int n)
{
    int spaces = 2 * (n - 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        spaces -= 2;
        cout << endl;
    }
}

// 1
// 2 3
// 4 5 6
// 7 8 9 10

void print13(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

// A
// A B
// A B C
// A B C D

void print14(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

// A B C D
// A B C
// A B
// A

void print15(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n - i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

// A
// B B
// C C C
// D D D D

void print16(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
void print17(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= n - i - 2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch++;
        }
        char ch2 = ch - 2;
        for (int j = 0; j < i; j++)
        {
            cout << ch2--;
        }
        cout << endl;
    }
}

void print18(int n)
{
    char ch = 'A' + n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(ch - j) << " ";
        }
        cout << endl;
    }
}

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
void print19(int n)
{
    int spaces = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++){
            cout << "*";
        }
        spaces += 2;
        cout << endl;
    }
    spaces-=2;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        spaces-=2;
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
void print20(int n){
    int spaces = 8;
     for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        spaces-=2;
        cout << endl;
    }
    spaces=2;
      for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++) {
            cout << "*";
        }
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 0; j < n- i-1; j++) {
            cout << "*";
        }
        spaces+=2;
        cout << endl;
    }
}


// *****
// *   *
// *   *
// *   *
// *****

void print21(int n){
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i == n-1 || j == n-1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void print22(int n){
    for(int i=0; i<2*n-1;i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2) -j;
            int down = (2*n-2) -i;
            cout << (n-min(min(top,down),min(left,right)));
        }
        cout << endl;
    }
}

int main()
{
    int n = 3;
    // print13(5);
    // print14(5);
    // print15(5);
    // print16(5);
    // print17(5);
    // print18(3);
    // print19(5);
       print22(5);
};
