// find the maximum subarray
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

class Solution{
    public:
    int maxSubArray(vector<int>& nums){
        int sum = 0, maxi = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            sum+= nums[i];
            if(sum > maxi) maxi = sum;
            if(sum < 0) sum = 0;
        }
        if(maxi == 0) maxi = 0;
        return maxi;
    }
};

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    Solution s;
    int result = s.maxSubArray(arr);
    cout<<"largest sum can get in this array: "<< result;
    return 0;
}
