#include<bits/stdc++.h>
using namespace std;
/*

     *     
    ***    
   *****   
  *******  
 ********* 

*/
void FullPyramid(int n){
    for (int i = 1; i <= n; i++){
        //space
        for (int j = 0; j < n-i; j++){
            cout<<" ";
        }
        // star
        for (int j = 0; j < 2*i-1; j++){
            cout<<"*";
        }
        // space why?
        // for (int j = 0; j < n-i+1; j++){
        //     cout<<" ";
        // }
        cout<<endl;
    }
}
/*

     1
    123
   12345
  1234567
 123456789

*/
void usingNumber(int n){
    for (int i = 1; i <= n; i++){
        //space
        for (int j = 0; j <= n-i; j++){
            cout<<" ";
        }
        // number
        for (int j = 1; j <= 2*i-1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

/*

     A
    ABC
   ABCDE
  ABCDEFG
 ABCDEFGHI

*/
void usingAlphabet(int n){
    for (int i = 1; i <= n; i++){
        //space
        for (int j = 0; j <= n-i; j++){
            cout<<" ";
        }
        // number
        for (int j = 0; j < 2*i-1; j++){
            cout<<char('A' +j);
        }
        cout<<endl;
    }
}

int main(){
    int n= 5;
    FullPyramid(n);
    usingNumber(n);
    usingAlphabet(n);
    return 0;
}
