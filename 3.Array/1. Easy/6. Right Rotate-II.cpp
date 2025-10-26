//right rotate by d pkace 
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    void rotate(vector<int>& arr ,int d){
        int n = arr.size();
        d = d%n;
        // store
        vector<int> temp;
        for (int i = 0; i <= d; i++){
            temp.push_back(arr[i]);
        }
        // shift
        for (int i = n-d; i < n; i++){
            arr[(i+d)%n] = arr[i];
        }
        // push back temp
        for (int i = 0; i <= d; i++){
            arr[d+i] = temp[i];
        }
    }
};
int main(){
    vector<int> arr = {1, 2, 3, 4, 5 , 6, 7};
                 //   {5, 6, 7, 1, 2, 3, 4}
    int d = 3;
    Solution s;
    s.rotate(arr, d);
    for (auto& i : arr){
    cout<< i <<" ";
    }
    return 0;
}