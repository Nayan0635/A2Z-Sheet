#include<iostream>
using namespace std;

class Solution{
    public:
    int fib(int n){
        if(n<2) return n;
        return fib(n-1) + fib(n-2);//using recursion
    }
};
int main(){
    int num;
    cout<<" Enter the number: ";
    cin>> num;
    Solution s;
    int result = s.fib(num);
    cout<<"The "<<num<<"th number in the Fibonacci sequence is: "<<result<<endl;
    return 0;
}