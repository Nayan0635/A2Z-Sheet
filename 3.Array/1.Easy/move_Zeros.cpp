//move Zeros to the End of the array
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    vector<int> moveZeros(vector<int> &nums){
        vector<int> temp;
        //stores non zeros in a temp array
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != 0)
                temp.push_back(nums[i]);            
        }
        //copy elements from temp fill first nz fields 
        for (int i = 0; i < temp.size(); i++){
            nums[i] = temp[i];
        }
        //fill zeros in rest of the places
        for (int i = temp.size(); i < nums.size(); i++){
            nums[i] = 0;
        }
        return nums;
    }
};
int main(){
    vector<int> arr = {2, -3, 0, 1, 0, -4, 12};
    Solution s;
    vector<int> ans = s.moveZeros(arr);
    for(auto ele: ans){
        cout<<ele<<" ";
    }
    return 0;
}