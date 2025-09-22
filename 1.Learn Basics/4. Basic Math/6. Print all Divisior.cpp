//all the divisor
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

class Solution{
    public:
    // void printDivisor(int n){
    //     for (int i = 0; i <= n; i++){
    //         if (n%i == 0){
    //             cout<<i<<endl;
    //         }
    //     }
    // }
    void printDivisor(int n){
        vector<int> arr;
        for (int i = 1; i*i <= n; i++){    //--->sqrt()
            if (n%i == 0){
                arr.push_back(i);
                if ((n/i) != i){
                    arr.push_back(n/i);
                }
            }
        }
        sort(arr.begin(), arr.end());     //O(nlogn)--> no of factors
        for (auto& i : arr)
            cout<<i <<" ";
    }
};
int main(){
    int n = 36;
    Solution s;
    s.printDivisor(n);
    return 0;
}