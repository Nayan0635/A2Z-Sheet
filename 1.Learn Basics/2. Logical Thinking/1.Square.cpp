/*

* * * * 
* * * * 
* * * * 
* * * * 



*/
#include<bits/stdc++.h>
using namespace std;
void printSquare(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    for (int i = 0; i < 3; i++){
        int n;
        cin>>n;
        printSquare(n);
    }
    return 0;
}