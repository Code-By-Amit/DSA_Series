#include <bits/stdc++.h>
using namespace std;


// ****
// ****
// ****
// ****
void print1(int n) {
	for(int i=0; i<n;i++){                      
		for(int j=0;j<n;j++){
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

void print2(int n) {
	for(int i=0; i<n;i++){
		for(int j=0;j<=i;j++){
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

void print3(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout << j+1 << " ";
		}
		cout << endl;
	}
}

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
void print4(int n){
    for(int i=0; i < n; i++){
        for(int j=0; j<=i; j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

// * * * * 
// * * * 
// * * 
// * 

void print5(int n) {
	for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

void print6(int n){
     for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//     **    
//    ****   
//   ******  
//  ******** 
// **********

void print7(int n){
      for(int i=0; i < n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int k=0; k<i*2+1;k++){
            cout << "*";
        }
        cout << endl;
    }  
}


//*******
// *****
//  ***
//   *

void print8(int n){
     for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k<2*n - (2*i+1); k++){
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

void print9(int n){
      for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        for (int k = 0; k < i * 2 + 1; k++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        for (int k = 0; k < 2 * n - (2 * i + 1); k++){
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

void print10(int n){
     for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
     for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

// 1 
// 0 1
// 1 0 1
// 0 1 0 1

void print11(int n){
     for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++) {
            if ((i+j) % 2 == 0){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
}


void print12(int n){

}

int main()
{
    int n = 3;
    print11(4);
    // for(int i=0; i < n; i++){
    //     for(int j=0;j<=i;j++){
    //         cout << j+1 << " ";
    //     }
    //     for(int k=0;k<2 *(n -i);k++){
    //         cout << "*";
            
    //     }
    //     for(int l=i;l>=0;l--){
    //         cout << l+1 << " ";
    //     }
    //     cout << endl;
    // }
};
