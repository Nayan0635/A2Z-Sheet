#include<bits/stdc++.h>
using namespace std;
/*

* * * * * 
*       *
*       *
*       *
* * * * *

*/
void Square(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == 0|| i == n-1|| j == 0||j == n-1){//star
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        // for (int j = 0; j < n; j++){
        //     if (i == 0|| i == n-1){//star
        //         cout<<"*"<<" ";
        //     }
        //     else{
        //         if (j == 0 ||j == n-1){
        //             cout<<"*"<<" ";
        //         }
        //         else{
        //             cout<<"  ";
        //         }
        //     }
        // }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    Square(n);
    return 0;
}