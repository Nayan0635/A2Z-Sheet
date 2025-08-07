#include<bits/stdc++.h>
using namespace std;
/*

     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA

*/
void pattern17(int n){
    for (int i = 0; i < n; i++){
        // space
        for (int j = 0; j < n-i; j++){
            cout<<" ";
        }
        //chracter
        char ch = 'A';
        for (int j = 0; j < (2*i+1); j++){
            cout<<ch;
            if (j < (2*i+1)/2) ch++;
            else ch--;
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    pattern17(n);
    return 0;
}