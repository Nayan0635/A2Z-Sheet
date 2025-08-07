#include<bits/stdc++.h>
using namespace std;
/*

A
BB
CCC
DDDD
EEEEE

*/
void pattern16(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout<<char('A'+i);
        }
        cout<<endl;
    }
    
}
int main(){
    int n = 5;
    pattern16(n);
    return 0;
}