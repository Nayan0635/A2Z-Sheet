#include<bits/stdc++.h>
using namespace std;
/*

4 4 4 4 4 4 4 
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/
void Pattern22(int n){
    for (int i = 0; i < 2*n-1; i++){
        for (int j = 0; j < 2*n-1; j++){
            int top = i, left = j, bottom = 2*(n-1)-i, right = 2*(n-1)-j;
            /* (2n-1) times (2n-1)-1 is the last index and dist is 2(n-1)-j;*/
            int value = n - min(min(top, left), min(right, bottom));
            cout<<value<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 4;
    Pattern22(n);
    return 0;
}