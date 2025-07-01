//left rotate a array by 1 place
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    void rotate(vector<int>& arr){
        int temp = arr[0];
        for (int i = 1; i < arr.size(); i++){
            arr[i-1] = arr[i];
        }
    }
};
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Solution s;
    for (auto& i : arr){
        cout<<arr[i];
    }
    return 0;
}