// Divide + Merge
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left = low, right = mid+1;
    while (left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low];
    }
    
}
void merge_sort(int arr[], int low, int high){
    if(low == high) return;
    int mid = low + (high-low)/2;
    // divide till last
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
    
}
int main(){
    int arr[] = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    int low = 0, high = 8;
    int n = sizeof(arr)/ sizeof(arr[0]);
    merge_sort(arr, low, high);
    for (int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}