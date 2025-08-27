//description
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    // int missingNum(vector<int>& arr, int n){// Brute
    //     int i = 0;
    //     for (i = 1; i <= n; i++){//check numbers from 1 to n
    //         int flag = 0;
    //         for (int j = 0; j < n-1; j++){//scanning through the array
    //             if(arr[j] == i){
    //                 flag = 1;   //--> element is presant
    //                 break;
    //             }
    //         }
    //         if (flag == 0){
    //             return i;//-->means i is missing
    //         }
    //     }
    //     return -1;
    // }

    // int missingNum(vector<int>& arr, int n){ //Better
    //     int hash[n+1] = {0};
    //     for (int i = 0; i < n-1; i++){//mark if element is presant
    //         hash[arr[i]]++;
    //     }
    //     for (int i = 1; i <= n; i++){//Numbers are 1 to N
    //         if (hash[i] == 0){
    //             return i;
    //         }
    //     }
    //     return -1;
    // }

    // int missingNum(vector<int>& arr, int n){//Optimal(Sum)
    //     int sum = n*(n+1)/2;
    //     int s2 = 0;
    //     int s = arr.size();
    //     for (int i = 0; i < s; i++){
    //         s2+= arr[i];
    //     }
    //     return (sum-s2 == 0)?-1:sum-s2;
    // }

    int missingNum(vector<int>& arr, int n){//Optimal(XOR)
        int XOR1 = 0;//-->XOR array elements
        int XOR2 = 0;//-->Xor Numbers
        for (int i = 0; i < n-1; i++){
            XOR1 = XOR1 ^ arr[i];
            XOR2 = XOR2 ^ i++;
        }
        XOR2 = XOR2 ^ n;
        return  (XOR1 ^ XOR2);
    }
};
int main(){
    vector<int> arr = {1,2,5,4};//-->given array is of size (N-1)
    int n = 5;//-->N
    Solution s;
    cout<<s.missingNum(arr, n)<<" is missing.";
    return 0;
}