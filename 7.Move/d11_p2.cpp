//find first and last occurance of a element
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> searchRange(vector<int>& nums, int target){
        int start = -1, end = -1;
        int n = nums.size();
        int low = 0, high = n - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                start = mid;
                high = mid - 1;//trim down from right to find first occurance
            }
            else if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        low = 0, high = n-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                end = mid;
                low = mid + 1;//trim down from left to find last occurance
            }
            else if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return {start, end};
    }
};
int main(){
    vector<int> arr = {5,7,8,8,8,10};
    int t = 8;
    Solution s;
    vector<int> ans = s.searchRange(arr, t);
    cout<<"["<<ans[0]<<","<<ans[1]<<"]";
    return 0;
}