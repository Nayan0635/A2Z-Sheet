/*given an sorted(non decreasing order) array
remove duplicates and return the k after placing
the final result in first k slots of the array ...*/
#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution{
    public://optimal
    int removeDuplicates(vector<int>& nums){
        int n = nums.size();
        int i = 0;
        for (int j = 1; j < n; j++){
            if (nums[i] != nums[j]){
                nums[++i] = nums[j];
            }
        }
        return i + 1;
    }
};
int main(){
    vector<int> vec = {1, 2, 2, 2, 3, 3, 4, 4};
    Solution s;
    int k = s.removeDuplicates(vec);
    cout << "The array after removing duplicate elements is: "<<k<< endl;
    for (int i = 0; i < k; i++)
        cout << vec[i] << " ";
}

// public://brute
// int removeDuplicates(vector<int> &nums){
//     set<int> st;
//     for (int i = 0; i < nums.size(); i++){
//         st.insert(nums[i]);//O(N times logN)+
//     }
//     int k = st.size();
//     int index = 0;
//     for (auto i : st){//--->O(N)
//         nums[index] = i;
//     }
//     return k;  S.C.->O(N)
// }