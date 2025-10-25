//select the minimum [14, 9, 15 , 12, 6, 8, 13] put at front 
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int mini = i;
        for (int j = i; j < n; j++){
            if (arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>> arr[i];
    }
    selection_sort(arr, n);
    for (int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }

    return 0;
}