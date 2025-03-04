// maximum consequtive 1's
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
    public:
    int findMaxConsequtiveOnes(vector<int>& nums){
        int count = 0;
        int maxi = INT_MIN;
        if(nums.size() < 0) return -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1){
                count++;
                maxi = max(maxi,count);
            }
            else
                count = 0;
        }
        return maxi;
    }
};

int main(){
    vector<int> arr = {1, 0, 1, 1, 0, 1, 1, 1};
    Solution s;
    cout<<"Maximum number of consequitive 1's is "<<s.findMaxConsequtiveOnes(arr);
    return 0;
}