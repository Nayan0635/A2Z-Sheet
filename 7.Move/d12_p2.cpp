//find minimum in rotated sorted array
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
    public:
    int findMin(vector<int>& nums){
        int ans = INT_MAX;
        int low = 0, high = nums.size() - 1;
        
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[low] <= nums[mid]){
                ans = min(ans, nums[low]);//take out the minimum from the sorted section 
                low = mid + 1;
            }
            else{
                ans = min(ans, nums[mid]);
                cout<<ans<<endl;
                high = mid - 1;
            }
        }
        return ans;
    }
};
int main(){
    vector<int> arr = {7,8,1,2,3,4,5,6};
    Solution s;
    cout<<"Minimum Element is: "<<s.findMin(arr);
    return 0;
}