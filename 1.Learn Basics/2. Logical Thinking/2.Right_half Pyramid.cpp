#include<bits/stdc++.h>
using namespace std;
/*

*
* *
* * *
* * * *
* * * * *

*/
void RighthalfPyramid(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
/*

1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/
void usingNumber(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
/*

A 
A B
A B C
A B C D
A B C D E

*/ 
// pattern14
void usingAlphabet(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout<<char('A' + j)<<" ";//65
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    // cin>>n;
    // RighthalfPyramid(n);
    // NumberPyramid(n);
    usingAlphabet(n);
    return 0;
}