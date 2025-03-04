//Find all factorial Number <= N
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<long long> factorialNumbers(long long n){
        long long fact = 1;
        vector<long long> ans;
        for(int i = 1; i <= n; i++){
            if(fact <= n) ans.push_back(fact);
            fact*= i;
        }
        return ans;
    }
};

int main(){
    long long num;
    Solution s;
    cout<<"Enter the num: ";
    cin>>num;
    // s.factorialNumbers(num);
    vector<long long>result = s.factorialNumbers(num);
    //cout<<result<<" ";--> cann't print a vector directly X
    for(long long i : result) cout<<i<<" ";

    return 0;
}