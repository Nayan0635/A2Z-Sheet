//description
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool armstrongNumber(int n){
        int x = n;
        int temp = 0;
        while (x > 0){
            int digit = x%10;
            temp = (digit*digit*digit) + temp;
            x/= 10;
        }
        if (temp == n) return true;
        else          return false;
    }
};
int main(){
    int num = 153;
    // cin>>num;
    Solution s;
    cout<<boolalpha<<s.armstrongNumber(num);
    return 0;
}