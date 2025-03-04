//Remove duplicates from sorted array
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int removeDuplicates(vector<int>& nums){
        if(nums.size() <= 1) return nums.size();
        int left = 0, right= 1;
        int count = 1;
        //while(static_cast<size_t>(right)<nums.size())
        while(right < nums.size()){
            if(nums[left] != nums[right]){
                left++;
                //nums[left] == nums[right];
                count++;
            }
            right++;
        }
        return count;
    }
};

int main(){
    vector<int> arr = {1, 1, 2, 2, 2, 3, 3, 4};
    Solution s;
    cout<<"After removing duplicates"<<endl;
    int n = s.removeDuplicates(arr);
    cout<<"Number of unique elements presant in this array "<<n;

    return 0;
}
