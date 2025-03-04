// longest consequtive sequence
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

class Solution{
    public:
    int ls(vector<int>& arr,int num){
        for (int i = 0; i < arr.size(); i++){
            if(arr[i]==num) return 1;
        }
        return 0;
    }
    int longestConsecutive_1(vector<int>& nums){//Brute Force 
        int n = nums.size();
        int longest = 1;
        for (int i = 0; i < n; i++){
            int count = 1;
            int x = nums[i];
            while(ls(nums, x+1) == 1){
                x = x + 1;
                count+= 1;
            }
            longest  = max(longest, count);
        }
        return longest;
    }
    int longestConsecutive_2(vector<int>& nums){//Better
        int longest = 1;
        int last_smaller = INT_MIN;
        int count = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());//sort first
        for (int i = 0; i < n; i++)
        {
            if(nums[i]-1 == last_smaller){
                count += 1;
                last_smaller = nums[i];
            }
            else if(last_smaller != nums[i]){//if number isn't a part of my sequence
                count = 1;
                last_smaller = nums[i];//start a new sequence
            }
            longest = max(longest, count);
        }
        return longest;
    }
};

int main(){
    vector<int> arr = {0, 3, 7, 2, 5, 8, 4, 6, 0 , 1};
    Solution s;
    int r = s.longestConsecutive_2(arr);
    cout<<r;
    return 0;
}