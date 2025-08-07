#include <bits/stdc++.h>
using namespace std;
/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/
void Pattern19(int n){
    for (int i = 0; i < 2*n; i++){
        if (i < n){
            for (int j = 0; j < n - i; j++){ // star
                cout << "*";
            }
            for (int j = 0; j < 2 * i; j++){ // space
                cout << " ";
            }
            for (int j = 0; j < n - i; j++){ // star
                cout << "*";
            }
            cout << endl;
        }
        else{
            for (int j = 0; j <= i-n; j++){ // star
                cout << "*";
            }
            for (int j = 0; j < 2*(2*n-i-1); j++){ // space
                cout << " ";
            }
            for (int j = 0; j <= i-n; j++){ // star
                cout << "*";
            }
            cout << endl;
        }
    }
}

int main(){
    int n = 5;
    Pattern19(n);
    return 0;
}