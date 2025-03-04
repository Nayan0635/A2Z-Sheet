//aggressive cows
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    bool canWePlace(vector<int>& arr,int dist, int cows){
        int cntCows = 1, last = arr[0];
        for (int i = 1; i < arr.size(); i++){
            if(arr[i]-last >= dist){
                cntCows++;
                last = arr[i];
            }
            if(cntCows >= cows) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int>& stalls, int k){
        int n = stalls.size();
        sort(stalls.begin(), stalls.end());
        //low-->min of all consequtive distance differences
        int low = 1, high = stalls[n-1] - stalls[0];
        while(low <= high){
            int mid = low + (high-low)/2;
            if(canWePlace(stalls,mid,k) == true)
                low = mid + 1;
            else
                high = mid -1;
        }
        return high;
    }
};
int main(){
    vector<int> arr = {0,3,4,7,9,10};
    int cows = 4;
    Solution s;
    cout<<"Cows can be placed at distance "<<s.aggressiveCows(arr, cows);
    return 0;
}