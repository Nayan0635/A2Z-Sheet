#include<bits/stdc++.h>
using namespace std;
// parameteized
void void_add(int i, int sum){  //void(4+3+2+1)
    if (i < 1){
        cout<<sum<<endl;
        return;
    }
    void_add(i-1, sum+i);
} //f(4, 0)--> f(3, 4)--> f(2, 7)--> f(1, 9)--> f(0, 10)


// functional
int return_add(int n){
    if (n == 0){
        return 0;
    }
    return n + return_add(n-1);
}

int main(){
    int n = 4;
    void_add(n, 0);
    cout<<return_add(n);
    return 0;
}