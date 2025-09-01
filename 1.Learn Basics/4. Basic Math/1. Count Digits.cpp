//count diits in a number 
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int CountDigit(int n){
        int flag = 0;
        while (n > 0){
            n/= 10;
            flag++;
        }
        return flag;
    }
};
int main(){
    int num;
    cin>>num;
    Solution s;
    cout<<s.CountDigit(num);
    return 0;
}