//description
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int Reverse(int n){
        int reverse = 0;
        while (n > 0){
            reverse = reverse*10 + n%10;
            n/= 10;
        }
        return reverse;
    }
};
int main(){
    int num;
    cin>>num;
    Solution s;
    cout<<s.Reverse(num)<<endl;
    return 0;
}