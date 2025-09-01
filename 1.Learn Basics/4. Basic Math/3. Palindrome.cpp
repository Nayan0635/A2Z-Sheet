//description
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isPalindrome(int x){
        int reverse = 0;
        int num = x;
        while (num > 0){
            reverse = reverse*10 + num%10;
            num/=10;
        }
        if (reverse == x) return true;
        else          return false;
    }
};
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    Solution s;
    cout<<s.isPalindrome(num);
    return 0;
}