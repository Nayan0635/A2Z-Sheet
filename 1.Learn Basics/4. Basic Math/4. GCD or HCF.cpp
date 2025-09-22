//reatest common divisor ot highest common factor
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int GCD(int a, int b){
        while (a > 0 && b > 0){
            if (a > b) a = a%b;
            else       b = b%a;
        }
        return (a == 0)?b : a;//T.C. O(log(min(a,b)))-->division happening
        /*log of phi cause it's a%b always changing */ 
    }
    // int GCD(int a, int b){
    //     for (int i = min(a,b); i>= 1; i--){
    //         if (a%i == 0 && b%i == 0 ){
    //             cout<<i<<endl;
    //             break;//-->breaks the loop 
    //         }
    //     }
    //     return 1;//T.C. O(min(n1,n2))
    // }
    
    // int GCD(int a, int b){
    //     int gcd = 1;
    //     for (int i = 1; i <= min(a,b); i++){
    //         if (a%i == 0 && b%i == 0 ){
    //             gcd = i;
    //         }
    //     }
    //     return gcd;
    // }
};
int main(){
    // int num1, num2;//20,40
    // cout<< "Enter two numbres: ";
    // cin>>num1>>num2;
    Solution s;
    cout<<s.GCD(56, 21)<<endl;
    return 0;
}