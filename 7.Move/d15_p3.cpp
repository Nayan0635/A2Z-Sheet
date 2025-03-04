/*find Peak element in a mxn matrix return index*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Solution{
    public:
    int maxElement(vector<vector<int>>& arr,int m, int col){
        int index = -1;
        int maxele = -1;
        for (int i = 0; i < m; i++){
            if(arr[i][col] > maxele){
                maxele = arr[i][col];
                index = i;
            }
        }
        return index; 
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat){
        int m = mat.size();//no of rows
        int n = mat[0].size();//no of col
        int low = 0; 
        int high = n - 1;
        while(low <= high){
            int mid = low + (high-low)/2;
            int row = maxElement(mat,m,mid);
            int left = mid-1 >= 0 ? mat[row][mid-1] : -1;
            int right = mid+1 < n ? mat[row][mid+1] : -1;
            if(left < mat[row][mid] && right < mat[row][mid])
                return {row,mid};
            else if(left > mat[row][mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return {-1, -1};
    }
};
int main(){
    vector<vector<int>> vec = {{1,4},{3,2}};
    Solution s;
    vector<int> ans = s.findPeakGrid(vec);
    cout<<"peak is at: ["<<ans[0]<<","<<ans[1]<<"]"<<endl;
    return 0;
}
