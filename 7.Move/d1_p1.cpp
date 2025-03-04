//Palindrome Number
#include<iostream>
using namespace std;

class Solution{
    public:
    bool isPalindrome(int x){
        if(x < 0 ||x % 10 == 0 && x != 0) return false;
        long long reverse = 0;
        int org = x;
        while(x != 0){
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x /= 10;
        }
        return org == reverse;// || x == reverse/10;//check if same as original
    }
};

int main(){
    int num;
    Solution s;
    cout<<"Enter the number: ";
    cin>>num;
    bool result = s.isPalindrome(num);
    if(result) cout<<num<<" is palindrome."<<endl;//bool value is condition
    else  cout<<num<<" is not palindrome."<<endl;
    return 0;
}