//set matrix zeros
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    //mark the entire column with -1
    int mark_Row(int i,vector<vector<int>> & matrix){
        for(int j = 0; j < matrix.size(); j++){
            if(matrix[i][j]!= 0) matrix[i][j] = -1;
        }
    }
    //mark the entire row with -1
    int mark_Col(int j,vector<vector<int>> & matrix){
        for(int i = 0; i < matrix[0].size(); i++){
            if(matrix[i][j]!= 0) matrix[i][j] = -1;
        }
    }
    
    void brute_setZeros(vector<vector<int>> & matrix){//BruteForce T.C. O[(m*n)*(m+n) + (m*n)] ≈ N^3
        int m = matrix.size();//no of rows
        int n = matrix[0].size();//no of col
        for (int i = 0; i < n; i++){ //O(m*n)*(m+n)
            for (int j = 0; j < m; j++){
                if(matrix[i][j]==0){
                    mark_Row(i,matrix); //O(m+n)
                    mark_Col(j,matrix);
                }
            }
            
        }
        //find -1 & make it zero
        for (int i = 0; i < n; i++){ //O(m*n)
            for (int j = 0; j < m; j++){
                if(matrix[i][j]==-1) matrix[i][j] = 0;
            }
        }
    }

    void better_setZeros(vector<vector<int>> &matrix){ //Better T.C. O[(m*n) + (m*n)]   S.C. O(m+n)
        int m = matrix.size();//no of rows-->j
        int n = matrix[0].size();//no of columns-->i
        //vector<int> rows(m,0); 
        int rows[n] = {0};
        // vector<int> cols(n,0);
        int cols[m] = {0};
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }
        //find 1 & make it zero
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(rows[i]||cols[j]) matrix[i][j] = 0;
            }
        }
    }
    void setZeros(vector<vector<int>> &matrix){ //Optimal T.C. O[(m*n) + (m*n)]   S.C. O(1)
        int m = matrix.size();//no of rows-->i
        int n = matrix[0].size();//no of columns-->j
        int col0 = 1;
        // int rows[n] = {0};--->matrix[0][--]
        // int cols[m] = {0};--->matrix[--][0]
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if(matrix[i][0] == 0) col0 = 0;
                if(matrix[i][j] == 0){
                    //marking ith row
                    matrix[i][0] = 0;
                    //marking jth column
                    matrix[0][j] = 0;
                }
            }
        }
        //set matrix zeros skipping the 1st row & column
        for (int i = 1; i < m; i++){
            for (int j = 1; j < n; j++){
                if(matrix[i][j] != 0){
                    //check for column & row
                    if(matrix[0][j] == 0 || matrix[i][0] == 0)
                        matrix[i][j] = 0;
                }
            }
        }
        //first row if needed
        if(matrix[0][0] == 0)
            for (int j = 0;j < n; j++) matrix[0][j] == 0;
        //first column
        if(!col0)
            for (int i = 0;i < m; i++) matrix[i][0] == 0;
    }
};
int main(){
    vector<vector<int>> arr = {{1, 1, 1, 1},
                               {1, 0, 1, 1},
                               {1, 1, 0, 1},
                               {0, 1, 1, 1}};
    Solution s;
    s.setZeros(arr);
    for(auto& row: arr){
        for (int element : row){
            cout<<element<<" ";  
        }
        cout<<endl;
    }
    return 0;
}