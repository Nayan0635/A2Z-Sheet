/*Painter's Partition Problem
count the minimum time to color the boards*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

class Solution{
    public:
    // bool cntpainters(vector<int>& arr,int time, int k){
    //     int p = 1;
    //     long long cnttime = arr[0];
    //     for (int i = 1; i < arr.size(); i++){
    //         if(cnttime + arr[i] <= time)
    //             cnttime+= arr[i];
    //         else{
    //             p++;
    //             cnttime = arr[i];
    //         }
    //         if(p > k) return true;
    //     }
    //     return false;
    // }
    bool cntpainters(vector<int>& arr, int time,int k){
        int p = 1;
        long long cnttime = arr[0];
        for (int i = 1; i < arr.size(); i++){
            if(cnttime + arr[i] > time){//got it
                p++;
                cnttime = arr[i];
            }
            else
                cnttime+= arr[i];
            if(p > k) return true;
        }
        return false;
    }
    int findLargestMinDistance(vector<int>& boards, int k){
        int low = *max_element(boards.begin(),boards.end());
        int high = accumulate(boards.begin(),boards.end(), 0);
        while(low <= high){
            int mid = low + (high-low)/2;
            if(cntpainters(boards,mid,k))
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};
int main(){
    vector<int> arr = {6,5,6,10,9,2,3,5};
    int painter = 2;
    Solution s;
    cout<<"Minimum time required is "<<s.findLargestMinDistance(arr,painter);
    return 0;
}