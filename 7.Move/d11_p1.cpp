//search insert position in a sorted
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int searchInsert(vector<int>& nums, int target){
        int index;
        int n = nums.size();
        int low = 0, high = n - 1;

        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] >= target){
                index = mid;
                high = mid - 1;//find the lowest
            }
            else
                low = mid + 1;
        }
        return index;
    }
};
int main(){
    vector<int> arr = {1, 3, 5, 6};
    int t = 5;
    Solution s;
    cout<<t<<"can be inserted at index "<<s.searchInsert(arr, t);
    return 0;
}