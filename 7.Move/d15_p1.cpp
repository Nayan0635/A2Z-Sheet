//search in 2D matrix
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    bool bs(vector<int>& arr, int target){//better
        int low = 0, high = arr.size() - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == target) return true;
            else if(arr[mid] < target) low = mid + 1;
            else high = mid-1;
        }
        return false; 
    }
    bool search(vector<vector<int>>& matrix, int target){//T.C. O(NlogM) N - row nos, M - col nos
        int n = matrix.size();
        for (int i = 0; i < n; i++){
            if(matrix[i][0] <= target && target <= matrix[i][n-1])
                if(bs(matrix[i],target)) return true;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target){//better
        int m = matrix.size();//no of rows
        int n = matrix[0].size();//no of columns
        int low = 0, high = m*n - 1;
        while(low <= high){//---------------------------------->
            int mid = low+ (high - low)/2;

            int row = mid/n;
            int col = mid%n;

            if(matrix[row][col] == target) 
                return true;
            else if(matrix[row][col] < target) 
                low = mid + 1;
            else 
                high = mid - 1; 
        }
        return false;
    }
};
int main(){
    vector<vector<int>> arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int k;
    cin>>k;
    Solution s;
    cout<<boolalpha<<s.searchMatrix(arr,k);
    return 0;
}