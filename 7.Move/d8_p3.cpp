//print matrix in spiral
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> spiralOrder(vector<vector<int>>& matrix){
        if(matrix.empty()) return {};
        int m = matrix.size();//no of rows
        int n = matrix[0].size();//no of columns
        int left = 0, right = n-1;
        int top = 0, bottom = m-1;
        vector<int> ans;
        while(right>= left && bottom>= top){
            //right → 
            for (int i = left; i <= right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            //down ↓ 
            for (int i = top; i <= bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<= bottom){
                //left ← 
                for (int i = right; i >= left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left <= right){
                //up ↑ 
                for (int i = bottom; i >=  top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;//<- ans was inside while loop
    }
};
int main(){
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 5}, {9, 10, 11, 6}, {13, 14, 15, 7}};
    Solution s;
    vector<int> result = s.spiralOrder(arr);
    for(auto i : result) cout<<i<<" ";
    return 0;
}