//description
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    int getSingle(vector<int>& arr){
        if (arr.size() == 1){
            return arr[0];
        }
        unordered_map<int, int> freq;
        for (auto& it : arr){
           freq[it]++;
        }
        for (auto& it : freq){
            if (it.second == 1){//-->check value: no of appearance
                return it.first;//-->return the key
            } 
        }
        return -1;
    }
};
int main(){
    vector<int> arr = {1,1,2,2,2,3,3,4};
    Solution s;
    cout<<s.getSingle(arr)<<endl;
    return 0;
}