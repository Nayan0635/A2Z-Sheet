//153,371,1634
// #include<iostream>
// #include<cmath>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // bool armstrongNumber(int n){
    //     int dup = n;
    //     int temp = 0;
    //     while (dup > 0){
    //         int digit = dup%10;
    //         temp = (digit*digit*digit) + temp;
    //         dup/= 10;
    //     }
    //     if (temp == n) return true;
    //     else          return false;
    // }
    bool armstrongNumber(int n){
        int digits = to_string(n).size();
        int temp = n;
        temp = n;
        double sum = 0;
        while (temp > 0){
            int digit = temp%10;
            sum = sum + pow(digit, digits);
            temp/= 10;
        }
        if (sum == n) return true;
        else          return false;
    }
};
int main(){
    int num = 1634;
    // cin>>num; 
    Solution s;
    cout<<boolalpha<<s.armstrongNumber(num);
    return 0;
}