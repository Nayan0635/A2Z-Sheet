//description
#include<bits/stdc++.h>
using namespace std;

void reverse(int i, int n, int arr[]){
    if (i >= n/2){ //crossing half
        return;
    }
    swap(arr[i], arr[n-i-1]);
    reverse(i+1, n, arr);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(0, n, arr);
    for (auto& i : arr){
       cout<<i<<" ";
    }
    return 0;
}