#include<bits/stdc++.h>
using namespace std;
/*

     *     
    ***    
   *****   
  *******  
 ********* 
 *********
  *******
   *****
    ***
     *

*/
void diamond(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n-i; j++){
            cout<<" ";
        }
        for (int j = 0; j < 2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= i; j++){
            cout<<" ";
        }
        for (int j = 1; j <= 2*(n-i)-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/
void diamond2(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n-i; j++){
            cout<<" ";
        }
        for (int j = 0; j < 2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 1; i < n; i++){
        for (int j = 1; j <= i; j++){
            cout<<" ";
        }
        for (int j = 1; j <= 2*(n-i)-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    diamond(n);
    diamond2(n);
    return 0;
}