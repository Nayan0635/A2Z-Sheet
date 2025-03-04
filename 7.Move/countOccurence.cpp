//count occurences in sorted array
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> countOccurence(vector<int>& arr, int target){
        int n = arr.size();
        vector<int> occurence;
        int low = 0, high = n-1;
        int first = -1, last = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == target){
                first = mid;
                high = mid-1; //trim down from right (first occurance)
            }
            //search for the element
            else if(arr[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        low = 0, high = n-1;//start again
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == target){
                last = mid;
                low = mid + 1; //trim down from left (last occurance)
            }
            else if(arr[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        cout<<last<<" "<<first<<endl;
        occurence.push_back(last - first + 1);
        // occurence[0] = (last - first + 1);
        return occurence;
    }
};
int main(){
    vector<int> arr = {1,2,2,3,3,3,4,4,5,6};
    int k = 3;
    Solution s;
    vector<int> ans = s.countOccurence(arr, k);
    cout<<"No of occurence "<<ans[0];
    return 0;
}