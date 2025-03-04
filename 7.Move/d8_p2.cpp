//rotate matrix by 90°
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void rotate(vector<vector<int>>& matrix){
        int n = matrix.size();
        for (int i = 0; i < n-1; i++){//find transpose matrix
            for (int j = i+1; j < n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for (int i = 0; i < n; i++){//reverse each row
            reverse(matrix[i].begin(),matrix[i].end());
        }  
    }//ready
};
int main(){
    vector<vector<int>> arr = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    Solution s;
    s.rotate(arr);
    for(auto& row: arr){
        for (int ele : row){
            cout<<ele<<" ";
        }
    }
    return 0;
}