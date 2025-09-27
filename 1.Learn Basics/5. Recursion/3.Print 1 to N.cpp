#include<bits/stdc++.h>
using namespace std;

void printNumber(int i, int n){  //--> Backtrack
    if(i < 1){
        return;
    }
    printNumber(i-1, n);
    cout<<i<<endl;
}

void printNum(int i, int n){
    if(i > n){
        return;
    }
    cout<<i<<endl;
    printNum(i+1, n);
}

int main(){
    int n = 3;
    printNum(1, n);
    cout<<endl;
    printNumber(n, n);
    return 0;
}
