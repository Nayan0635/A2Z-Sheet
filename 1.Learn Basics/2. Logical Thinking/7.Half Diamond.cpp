#include<bits/stdc++.h>
using namespace std;
/*

*
**
***
****
*****
****
***
**
*

*/
void HalfDiamond(int n){
    for (int i = 0; i <= 2*n-1; i++){
        int stars = i;
        if (i > n) stars = 2*n - i;//find no of stars
        //now print those many stars
        for (int j = 1; j <= stars; j++){
            cout<< "*";
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    HalfDiamond(n);
    return 0;
}