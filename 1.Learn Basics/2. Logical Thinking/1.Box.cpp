/*

* * * * -->1st row ->col 1 2 3 4
* * * * -->2nd row ->col 1 2 3 4
* * * * -->3rd row ->col 1 2 3 4
* * * * -->4th row ->col 1 2 3 4

*/
#include<bits/stdc++.h>
using namespace std;
void printSquare(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    for (int i = 0; i < 3; i++){
        int n;
        cin>>n;
        printSquare(n);
    }
    return 0;
}