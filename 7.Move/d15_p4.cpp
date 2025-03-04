//median in a row wise sorted matrix
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    int Blackbox(vector<vector<int>> & matrix,int m,int n, int x){
        int cnt = 0;
        for (int i = 0; i < m; i++){
            cnt += upper_bound(matrix[i].begin(),matrix[i].end(),x) - matrix[i].begin();
        }
        return cnt;
    }
    int median(vector<vector<int>> &matrix, int R, int C){  
        int low = matrix[0][0];
        int high = matrix[R-1][C-1];
        int req = R*C/2;
        while(low < high){
            int mid = low + (high - low)/2;
            int smallerequal = Blackbox(matrix,R,C,mid);
            if(smallerequal <= req) 
                low = mid + 1;
            else                    
                high = mid - 1;
        }
        return low;
    }
};
int main(){
    vector<vector<int>> arr = {{1,5,7,9,11},{2,3,4,5,10},{9,10,12,14,16}};
    int m = arr.size();
    int n = arr[0].size();
    Solution s;
    int median = s.median(arr,m,n);
    cout << "Median is " << median << endl;
    return 0;
}