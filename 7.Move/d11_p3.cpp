/*ceil the floor
floor of "x" is largest element in the array which is <= "x"
ceiling of "x" is smallest element in the array which is >= "x"*/

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
        int floor = -1, ceil = -1;
        int low = 0, high = n - 1;

        while(low <= high){
            int mid = (low + high)/2;
            if(a[mid] <= x){
                floor = a[mid];
                low = mid + 1;//trim down from left find largest element
            }
            else if(a[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }

        low = 0, high = n-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(a[mid] >= x){
                ceil = a[mid];
                high = mid - 1;//trim down from right find smalllest element
            }
            else if(a[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return {floor, ceil};
    }
};
int main(){
    vector<int> arr = {3,4,7,8,8,10};
    int x = 6;
    int n = arr.size();
    Solution s;
    pair<int, int> ans = s.getFloorAndCeil(arr,n , x);
    cout<<"["<<ans.first<<","<<ans.second<<"]";
    return 0;
}