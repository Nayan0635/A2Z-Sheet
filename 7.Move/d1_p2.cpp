//GCD of 2 Number
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<long long> lcmandGcd(long long A,long long B){
        long long a = A;
        long long b = B;
        while(a > 0 && b > 0){
            if(a > b) a %= b;
            else      b %= a;
        }
        long long gcd = (a == 0) ? b : a;//remaining non zero value is gcd
        long long lcm = (A * B) / gcd;
        return {lcm,gcd};// return gcd,lcm as vector
    }

};

int main(){
    int a,b;
    Solution s;
    cout<<"Enter two number: ";
    cin>>a>>b;
    vector<long long> result = s.lcmandGcd(a,b);
    cout<< "GCD of " <<a<< " and "<<b<< " is " <<result[1]<<endl;//stores 1st value of vector
    cout<< "LCM of " <<a<< " and "<<b<< " is " <<result[0]<<endl;//stores 2nd value of vector
    return 0;
}//hoyni