/*given an sorted(non decreasing order) array 
remove duplicates and return the k after .....*/
#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Solution{
    public:
    int removeduplicate(vector<int> &nums){
        
    }
};
int main(){
    
    Solution s;
    return 0;
}
// public://brute
// int removeDuplicates(vector<int> &nums){
//     set<int> st;
//     for (int i = 0; i < nums.size(); i++){
//         st.insert(nums[i]);//store in set from array
//     }
//     int k = st.size();
//     int index = 0;
//     for (auto i : st){
//         nums[index] = i;
//     }
//     return k;  
// }