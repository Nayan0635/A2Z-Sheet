//Two Sum
#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> brute(vector<int>& nums, int target){//Brute Force
        int n = nums.size();
        for(int i = 0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if (i == j) continue;//you cann't pickup the same element
                if(nums[i] + nums[j] == target) return {i, j};
            }
        }
        return {};//return an empty vector when no pair is found 
    }
    bool twoSum(vector<int> &nums, int target){//better
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            int more = target - nums[i];
            if(mpp.find(more)!= mpp.end())  return true;//if more is presant
            mpp[nums[i]] = i;//store the element and its index
        }
        return false;
    }

};

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};    
    Solution s;
    cout<<s.twoSum(arr, 10);
    // if(!result.empty())
    // cout<<"Indices to get the target element is "<<result[0]<<" and "<<result[1];
    // else
    // cout<<"No pair found";
    // return 0;
}//26/12/24