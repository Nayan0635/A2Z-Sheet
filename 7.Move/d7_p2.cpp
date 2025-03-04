// merge sorted array
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){//optimal
        int i = m-1, j = n-1,  k = m+n-1;
        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }
        while(j >= 0)//add remaining elements of nums2
            nums1[k--] = nums2[j--];
    }
};

int main(){
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> arr2 = {2, 5, 6};
    int n = 3;
    Solution s;
    arr1.resize(m+n);
    s.merge(arr1,m,arr2,n);
    cout<<"[ ";
    for(int i: arr1)
    cout<<i<<" ";
    cout<<"]";
    return 0;
}