/*capasity to ships packages within D days
find the minimum capasity required
ans will be result*/
#include<iostream>
#include<vector>
#include<algorithm>//to get the max
#include<numeric>//to calculate sum
using namespace std;

class Solution{
    public:
    int findDays(vector<int>& weights, int cap){
        int load = 0, days = 1;
        for(int i = 0; i < weights.size(); i++){
            if(load + weights[i] > cap){
                days++;
                load = weights[i];
            }
            else
                load+= weights[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days){
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low <= high){
            int mid = low + (high-low)/2;
            //mid = low + high/2;--> overflow hahahaha
            int numberOfDays = findDays(weights, mid);
            if(numberOfDays <= days){
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return low; 
    }
};
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int d = 5;
    Solution s;
    cout<<"The ship should have capasity of "<<s.shipWithinDays(arr, d);
    return 0;
}