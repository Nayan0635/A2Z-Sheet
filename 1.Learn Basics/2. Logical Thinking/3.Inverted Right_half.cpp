#include<bits/stdc++.h>
using namespace std;
/*

* * * * * 
* * * *
* * *
* *
*

*/
void InvertedRighthalf(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < (n - i); j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
/*

1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

*/
void usingNumber(int n){
    for (int i = 0; i < n; i++){
        for (int j = 1; j <=(n - i); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
/*
A B C D E 
A B C D 
A B C
A B
A

*/
// pattern15
void usingAlphabet(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <(n - i); j++){
            cout<<char('A' + j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    // InvertedRighthalf(n);
    // usingNumber(n);
    usingAlphabet(n);
}