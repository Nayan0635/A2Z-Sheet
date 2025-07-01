//left rotate an array by d
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    void rotatetArr(vector<int> & arr, int d){
        
    }
    void rotate(vector<int>& nums, int d){
        int n = nums.size();
        d =d % n;       //in case d>n
        vector<int> temp(n);
        for(int i = 0; i < n; i++){// do it after dth position
            temp[(i+d)%n] = nums[i];

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
    int d;
    Solution s;
    cout<<"Enter dth position: ";
    cin>> d;
    s.rotate(arr,d);
    cout<<"After rotation your vector: [ ";
    for(int i: arr)
    cout<< i<< " ";
    cout<<"]";
    
    return 0;
}