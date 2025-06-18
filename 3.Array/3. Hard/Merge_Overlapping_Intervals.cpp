/*merge overlapping sub intervals
    return the final pairs
*/
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    vector<vector<int>> merge(vector<vector<int>> &intervals){
        if (intervals.empty()) return {};
        
        // Sort intervals by start time
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> result;
        // Take first interval as current
        result.push_back(intervals[0]);
        
        // Iterate through intervals
        for (int i = 1; i < intervals.size(); i++) {
            // Get reference to last merged interval
            vector<int>& last = result.back();
            
            // If current interval overlaps with last merged interval
            if (intervals[i][0] <= last[1]) {
                // Update end time of last merged interval
                last[1] = max(last[1], intervals[i][1]);
            } else {
                // No overlap, add new interval to result
                result.push_back(intervals[i]);
            }
        }
        
        return result;
    }
};
int main(){
    
    Solution s;
    return 0;
}