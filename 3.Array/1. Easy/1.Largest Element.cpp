//find largest element
//include<bits/c++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    // int largest(vector<int> &arr){ //brute
    //     sort(arr.begin(),arr.end()); T.C. O(NlogN)
    //     return arr.back(); S.C. O(n)
    // }
    int largest(vector<int> &arr){
        int maxi = arr[0];
        for (int i = 1; i < arr.size(); i++) //T.C. O(N)
            if(arr[i] > maxi) maxi = arr[i];
        return maxi;
    }
    int findlargest(vector<int>& nums,int n){ //recurrsive approach
        if (n == 1) return nums[0];
        return max(nums[n-1], findlargest(nums, n-1));//T.C. O(N)
    }
};
int main(){
    vector<int> vec = {1, 22, 3, 4, 5};
    int n = vec.size();
    Solution s;
    cout<<s.largest(vec)<<endl;    
    cout<<s.findlargest(vec, n)<<endl;
    return 0;
}
