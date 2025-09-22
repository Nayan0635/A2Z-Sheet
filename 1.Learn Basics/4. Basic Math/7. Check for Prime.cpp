//a no has exactly 2 factors 1 and itself--> Prime Number
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution{
    public:
    void checkPrime(int n){
        if (n <= 1) cout<<"false"<<endl;
        for (int i = 2; i*i <= n; i++){
            if (n%i == 0){
                cout<<"false"<<endl;
                return;
            }
        }
        cout<<"true"<<endl;
    }
    // void checkPrime(int n){
    //     int cnt = 0;
    //     for (int i = i; i*i <= n; i++){
    //         if (n%i == 0){
    //             cnt++;
    //             if ((n/i) != i) cnt++;
    //         }
    //         if (cnt > 2) break;//--->
    //     }
    //     if (cnt == 2) cout<<"true"<<endl;
    //     else cout<<"false"<<endl;
    // }
};
int main(){
    int n;
    cin>>n;
    Solution s;
    s.checkPrime(n);
    return 0;
}