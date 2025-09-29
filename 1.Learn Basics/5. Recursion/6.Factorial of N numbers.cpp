// print factorial using recursion
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if (n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

void Factorial(int n, int f){
    if (n == 1){
        cout<<f<<endl;
        return;
    }
    f = f*n;
    Factorial(n-1, f);
}

int main(){
    int n = 4;
    cout<<factorial(n)<<endl;
    Factorial(n, 1);
    return 0;
}