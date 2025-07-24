#include<bits/stdc++.h>
using namespace std;
/*



*/
void FullPyramid(int n){
    for (int i = 1; i <= n; i++){
        //space
        for (int j = 0; j <= n-j; j++){//
            cout<<" ";
        }
        // star
        for (int j = 0; j <= n-i; j++){
            cout<<"*";
        }
        // space
        for (int j = 0; j < 2*i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n= 5;
    FullPyramid(n);
    return 0;
}
