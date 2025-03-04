/*find Peak element in rotated sorted array return index
peak element is an element such that a[i-1]<a[i]>a[i+1]
take hypothetically -∞[5,4,3,2,1]-∞ 5 is the peak element*/
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int findPeakElement(vector<int>& nums){
        int n = nums.size();
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        else if(nums[n-1] > nums[n-2]) return n-1;

        int low = 1, high = n - 2;
        //binary search
        while(low <= high){
            int mid = low + (high - low)/2;
            //if mid is my peak element 
            if(nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]){
                return mid;
            }
            else if(nums[mid-1] <  nums[mid]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return -1;
    }
};
int main(){
    vector<int> vec = {1,8,1,1,0};
    Solution s;
    cout<<"Peak Element is at: "<<s.findPeakElement(vec);
    return 0;
}