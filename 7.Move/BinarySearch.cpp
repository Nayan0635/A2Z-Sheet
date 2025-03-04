//binary search algorithm
#include<iostream>
using namespace std;

int search(int arr[],int low, int high, int target){//iterative
    /*int size = sizeof(arr);//sizeof(int*)
    cout<<size<<endl;*/
    while(low <= high){
        int mid = (low + high)/2;
        
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low = mid + 1;
        else high = mid-1;
    }
    return -1; 
}
int bs(int nums[], int low, int high,int target){//recursive
    if(low > high) return -1;
    int mid = (low + high)/2;
    if(nums[mid] == target)
        return mid;
    else if(nums[mid] > target)
        return bs(nums,low, mid - 1, target);
    else
        return bs(nums, mid + 1,high, target);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 11, 13, 15, 16};
    int s = sizeof(arr)/sizeof(arr[0]);
    /*int size = sizeof(arr);
    cout<<size<<endl;*/
    int k = 16;
    int low = 0, high = s - 1;
    int r = search(arr, low, high, k);
    if(r != -1) cout<<"Element is found at index "<<r;
    else       cout<<"Element isn't presant";
    return 0;
}