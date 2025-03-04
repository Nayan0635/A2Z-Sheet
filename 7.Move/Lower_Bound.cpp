//lower bound-->smallest index such that arr[mid] >= target;
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n, int target){
    int ans = n;
    int low = 0, high = n - 1;
    // int lb = lower_bound(arr,arr+n,target) - arr;
    // return lb;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans; 
}

int main(){
    int arr[] = {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};
    int s = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    
    int r = search(arr, s, k);
    cout<<"Lower Bound of "<<k<<" is presant at index: "<<r;
    return 0;
}