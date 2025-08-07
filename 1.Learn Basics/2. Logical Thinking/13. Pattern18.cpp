#include<bits/stdc++.h>
using namespace std;
/*

E 
D E
C D E
B C D E
A B C D E

*/
// void pattern18(int n){
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j <= i; j++){
//             cout<<char('E'-(i-j))<<" ";
//         }
//         cout<<endl;
//     }
    
// }
void pattern18(int n){
    for (int i = 0; i < n; i++){
        for (char ch = 'E'-i; ch <= 'E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    int n = 5;
    pattern18(n);
    return 0;
}