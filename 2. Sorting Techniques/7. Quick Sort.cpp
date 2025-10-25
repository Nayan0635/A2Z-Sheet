// pick a pivot & place it in its correct place in the sorted array
#include<bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j){
        while(arr[i] <= pivot && i < high){
            i++;
        }
        while(arr[j] > pivot && j > low){
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);//-->
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high){
    if(low < high){
        int pindex = findPivot(arr, low, high);
        quick_sort(arr, low, pindex - 1);
        quick_sort(arr, pindex + 1, high);
    }
}

int main(){
    int arr[] = {4, 6, 9, 5, 7, 2, 1, 3};
    int low = 0, high = 8;
    int n = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, low, high);
    cout<<"Sorted Array: ";
    for (int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}