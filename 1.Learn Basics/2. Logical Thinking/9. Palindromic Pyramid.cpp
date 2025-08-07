#include<bits/stdc++.h>
using namespace std;
/*

1        1
12      21
123    321
1234  4321
1234554321

*/
void PalidromicPyramid(int n){
    for (int i = 1; i <= n; i++){
        int k = i;
        for (int j = 1; j <= i; j++){//number
            cout<<j;
        }
        for (int j = 1; j <= 2*(n-i); j++){//space
            cout<<" ";
        }
        for (int j = 1; j <= i; j++){//number
            cout<<k;
            k--;
        }
        cout<<endl;
    }
}

// void PalidromicPyramid(int n){
//     for (int i = 1; i <= n; i++){
//         for (int j = 1; j <= i; j++){//number
//             cout<<j;
//         }
//         for (int j = 1; j <= 2*(n-i); j++){//space
//             cout<<" ";
//         }
//         for (int j = i; j >= 1; j--){//number
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

int main(){
    int n = 5;
    PalidromicPyramid(n);
    return 0;
}