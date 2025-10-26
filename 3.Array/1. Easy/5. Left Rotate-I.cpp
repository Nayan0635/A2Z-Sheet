//left rotate array by 1 place
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    void rotate(vector<int>& arr){
        int n = arr.size();
        int temp = arr[0];
        for (int i = 1; i < n; i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
    }
};
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Solution s;
    s.rotate(arr);
    cout<<"[";
    for (auto& i : arr){
        cout<<i <<" ";
    }
    cout<<"]";
    return 0;
}