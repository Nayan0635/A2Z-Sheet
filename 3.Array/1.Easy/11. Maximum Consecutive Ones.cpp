//maximum consecutive ones
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int findConsecutiveOnes(vector<int>& nums){
        int maxi = 0;
        int s = nums.size();
        int cnt = 0;
        for (int i = 0; i < s; i++){
            if (nums[i] == 1){
                cnt+= 1;
            }
            else{
                cnt = 0;
            }
            maxi = max(cnt, maxi);
        }
        return maxi;
    }
};
int main(){
    vector<int> arr = {1,1,0,1,1,1,0,1,1};
    
    Solution s;
    cout<<s.findConsecutiveOnes(arr)<<endl;
    return 0;
}