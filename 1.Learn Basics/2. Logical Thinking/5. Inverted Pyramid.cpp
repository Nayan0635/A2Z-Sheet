#include<bits/stdc++.h>
using namespace std;
/*

*********
 *******
  *****
   ***
    *

*/
void InvertedPyramid(int n){
    for (int i = 0; i < n; i++){
        //space
        for (int j = 1; j <= i; j++){//
            cout<<" ";
        }
        // star
        for (int j = 1; j <= 2*(n-i)-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*

123456789
 1234567
  12345
   123
    1

*/
void usingNumber(int n){
    for (int i = 0; i < n; i++){
        //space
        for (int j = 1; j <= i; j++){//
            cout<<" ";
        }
        // star
        for (int j = 1; j <= 2*(n-i)-1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
/*

ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A

*/
void usingAlphabet(int n){
    for (int i = 0; i < n; i++){
        //space
        for (int j = 1; j <= i; j++){//
            cout<<" ";
        }
        // star
        for (int j = 0; j < 2*(n-i)-1; j++){
            cout<<char('A' +j);
        }
        cout<<endl;
    }
    
}

int main(){
    int n= 5;
    // InvertedPyramid(n);
    // usingNumber(n);
    usingAlphabet(n);
    return 0;
}
