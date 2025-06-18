//find larest element
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{//recursive approach
    public:
    int largest(vector<int> &arr){
        int maxi = arr[0];
        for (int i = 1; i < arr.size(); i++) //T.C. O(N)
            if(arr[i] > maxi) maxi = arr[i];
        return maxi;
    }
};
int main(){
    vector<int> vec = {1, 22, 3, 4, 5};
    Solution s;
    cout<<s.largest(vec);
    return 0;
}
// class Solution{
//     public:
//     int bruteforce(vector<int> &arr){
//         sort(arr.begin(),arr.end()); T.C. O(NlogN)
//         return arr.back(); S.C. O(n)
//     }
// }; 