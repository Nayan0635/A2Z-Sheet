/*given an sorted(non decreasing order) numsay
remove duplicates and return the k after placing
the final result in first k slots of the numsay ...*/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> set;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            set.insert(nums[i]);
        }
        int k = set.size();
        int j = 0;
        for (int x : set)
        {
            nums[j++] = x;
        }
        return k;
    }
};
int main()
{
    vector<int> vec = {1, 2, 2, 2, 3, 3, 4, 4, 5};
    Solution s;
    int k = s.removeDuplicates(vec);
    cout << "The numsay after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++)
        cout << vec[i] << " ";
}
