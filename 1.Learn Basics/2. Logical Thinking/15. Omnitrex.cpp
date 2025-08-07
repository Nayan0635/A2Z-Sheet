#include <bits/stdc++.h>
using namespace std;
/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/
void Omnitrex(int n){
    for (int i = 0; i < 2*n-1; i++)
    {
        if (i < n){
            for (int j = 0; j <= i; j++){ // star
                cout << "*";
            }
            
            for (int j = 0; j < 2 * (n - i-1); j++)
            {// space
                cout<<" ";
            }
            for (int j = 0; j <= i; j++){ // star
                cout << "*";
            }
            cout << endl;
        }
        else{
            for (int j = 0; j <= 2*n-2-i; j++){//star
                cout<<"*";
            }
            for (int j = 0; j < 2*(i-n+1); j++){//space
                cout<<" ";
            }
            for (int j = 0; j <= 2*n-2-i; j++){//star
                cout<<"*";
            }
            cout<<endl;
        }
    }
}
int main(){
    int n = 5;
    Omnitrex(n);
    return 0;
}