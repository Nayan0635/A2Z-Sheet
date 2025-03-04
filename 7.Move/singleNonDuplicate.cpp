//find single element in array
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int singleNonDuplicate(vector<int>& arr){
        int n = arr.size();
        if(n == 1) return arr[0];
        if(arr[0] != arr[1]) return arr[0];
        if(arr[n-1] != arr[n-2]) return arr[n-1];

        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            // int mid = low + high/2; -->hahahaha
            cout<<mid<<endl;
            if(arr[mid]!= arr[mid-1] && arr[mid]!= arr[mid+1]) return arr[mid];
            //[even odd] single element is in right half
            //we are in left
            if((mid % 2 == 0 && arr[mid] == arr[mid+1])
              ||(mid % 2 == 1 && arr[mid] == arr[mid-1])){
                low = mid + 1;
                cout<<low<<" "<<high<<endl;
            }
            //we are on right
            else{
                high = mid -1;
                cout<<low<<" "<<high<<endl;
            }
        }
        return -1;
    }
};
int main(){
    vector<int> arr = {1,1,2,2,3,3,4,5,5,6,6};
    Solution s;
    cout<<"Single person is: "<<s.singleNonDuplicate(arr);
    return 0;
}