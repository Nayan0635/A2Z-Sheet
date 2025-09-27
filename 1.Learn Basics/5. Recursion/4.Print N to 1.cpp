#include<bits/stdc++.h>
using namespace std;

void printNum(int i, int n){
    if(i < 1){
        return;
    }
    cout<<i<<endl;
    printNum(i-1, n);
}

void printNumber(int i, int n){   //-->Backtrack
    if(i > n){
        return;
    }
    printNumber(i+1, n);
    cout<<i<<endl;
}

int main(){
    int n = 3;
    printNum(n, n);
    cout<<endl;
    printNumber(1, n);
    return 0;
}
