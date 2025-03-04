//search in right rotated sorted array
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    bool search(vector<int>& A, int key){
        int n = A.size();
        int low = 0, high = n-1;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(A[mid] == key) return true;
            //trim down from both side if elements are same
            if(A[low] == A[mid] && A[mid] == A[high]){
                low++,high--;
                continue;// T.C. O(n) at worst case
            }
            if(A[low] <= A[mid]){
                if(A[low] <= key && key<=A[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else{
                if(A[mid] < key && key <= A[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return false;
    }
};
int main(){
    vector<int> arr = {1,1,1,1,1,1,2,1,1,1};
    int k = 2;
    Solution s;
    int r = s.search(arr,k);
    if(r) cout<<"Element presant";
    else cout<<"Element not presant";
    return 0;
}