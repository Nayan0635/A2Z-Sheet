// maximum product subarray
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
    public:
    int better(vector<int>& nums){//better
        int n = nums.size();
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++){
            int product = 1;
            for (int j = i; j < n; j++){
                product *= nums[j];
                maxi = max(maxi, product); 
            }
        }
        return maxi;
    }
    int maxProduct(vector<int>& nums){//Optimal Solution
        double maxi = INT_MIN;
        double prefix = 1; 
        double suffix = 1; 
        int n = nums.size();
        for (int i = 0; i < n; i++){
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;
            //start from front & end
            prefix = prefix * nums[i];
            suffix = suffix * nums[n-i-1];
            maxi = max(maxi, max(prefix, suffix)); // Cast to int before comparison
        }
        return maxi;
    }
};

int main(){
    vector<int> arr = {2, 3, -2, 4};
    Solution s;
    int r = s.maxProduct(arr);
    cout<<r;
    return 0;
}
/*
int maxProduct(vector<int>& nums){//Optimal Solution
    int maxi = INT_MIN;
    long long prefix = 1; // Use long long to avoid overflow
    long long suffix = 1; // Use long long to avoid overflow
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
       if(prefix == 0) prefix = 1;
       if(suffix == 0) suffix = 1;

       prefix = prefix * nums[i];
       suffix = suffix * nums[n-i-1];

       maxi = max(maxi, max((int)prefix, (int)suffix)); // Cast to int before comparison
    }
    return maxi;
}
*/