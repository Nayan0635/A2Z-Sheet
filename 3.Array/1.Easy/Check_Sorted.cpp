//check if sorted or not
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        if (nums.size() <= 1) return true;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i]< nums[i-1])
                return false;
        }
        return true;
    }
};
int main(){
    vector<int> arr = {1, 7, 3, 4, 5};
    Solution s;
    cout<<s.check(arr);
    return 0;
}