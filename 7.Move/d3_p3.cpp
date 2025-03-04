//left rotate an array by k
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    void rotatetArr(vector<int> & arr, int d){
        
    }
    void rotate(vector<int>& nums, int k){
        int n = nums.size();
        k =k % n;//in case k>n
        vector<int> temp(n);
        for(int i = 0; i < n; i++){// do it after kth position
            temp[(i+k)%n] = nums[i];
            /*int temp = nums[n-1];
            for(int j = n-1; j > 0; j--){//shift the elements to right
            nums[j] = nums[j-1];
            }
            nums[0] = temp;*///time limit exceeded
        }
        nums = temp;
    }
};
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k;
    Solution s;
    cout<<"Enter kth position: ";
    cin>> k;
    s.rotate(arr,k);
    cout<<"After rotation your vector: [ ";
    for(int i: arr)
    cout<< i<< " ";
    cout<<"]";
    
    return 0;
}