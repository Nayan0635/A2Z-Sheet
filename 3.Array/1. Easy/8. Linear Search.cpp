//Linear Search
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int search(vector<int>& arr, int num){
        int s = arr.size();
        for (int i = 0; i < s; i++){
            if (arr[i] == num){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 5;
    Solution s;
    cout<< s.search(arr, k);
    return 0;
}