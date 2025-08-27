//left rotate array by d place 
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    // void rotate(vector<int>& nums, int d){
    //     vector<int> temp;
    //     int n = nums.size();
    //     for (int i = 0; i < d; i++){//store
    //         temp.push_back(nums[i]);
    //     }
    //     for (int i = d; i < nums.size(); i++){//shift
    //         nums[i-d] = nums[i];
    //     }
    //     for (int i = n-d; i < n; i++){//put back temp
    //        nums[i] = temp[i - (n-d)];
    //     }// (n-d) elemnts are already placed so if I take i-(n-d) I can get temp indices
    // }
    void rotate(vector<int>& nums, int d){
        int n = nums.size();// 1,2,3,4,5,6,7
        reverse(nums.begin(), nums.begin()+d);     // 3,2,1,4,5,6,7
        reverse(nums.begin()+d, nums.end());      // 3,2,1,7,6,5,4
        reverse(nums.begin(), nums.end());       // 4,5,6,7,1,2,3
    }

    /*
    1,2,3,4,5,6,7
    4,5,6,7,1,2,3
    */
};
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Solution s;
    int d = 3;
    s.rotate(arr, d);
    cout<<"[";
    for (auto& i : arr){
        cout<<i <<" ";
    }
    cout<<"]";
    return 0;
}