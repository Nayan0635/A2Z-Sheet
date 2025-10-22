// takes an element and insert it in its correct position
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n){
    int as;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>> arr[i];
    }
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }

    return 0;
}