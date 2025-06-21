/*merge overlapping sub intervals
    return the final pairs
*/
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    vector<vector<int>> merge(vector<vector<int>> &intervals){
        if (intervals.empty()) return {};
        sort(intervals.begin(), intervals.end());// Sort intervals by start time
        vector<vector<int>> result;// Take first interval as current
        result.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) {// Iterate through intervals
            vector<int>& last = result.back();// Get reference to last merged interval
            if (intervals[i][0] <= last[1]) {// If current interval overlaps with last merged interval
                last[1] = max(last[1], intervals[i][1]);// Update end time of last merged interval
            } else 
                result.push_back(intervals[i]);// No overlap, add new interval to result
        }
        return result;
    }
};
int main(){
    
    Solution s;
    return 0;
}