//find next permutation
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    void nextPermutation(vector<int>& arr){
        next_permutation(arr.begin(),arr.end());
    }
    void nextPermutation_1(vector<int>& nums){
        int index = -1;
        int n = nums.size();
        for (int i = n-2; i > 0; i--)//lower prefix match
        {//find the break point
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }//in case it's the last order
        if(index == -1) reverse(nums.begin(), nums.end());
        //find greater than index but smallest one
        for (int i = n-1; i > index; i--)
        {
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }//reverse the rest part to get the closest
        reverse(nums.begin() + index + 1, nums.end());
    }
};
int main(){
    vector<int> arr = {2, 1, 5, 4, 3, 0, 0};
    Solution s;
    s.nextPermutation(arr);
    for(int i: arr)
    cout<<i<<" ";
    return 0;
}