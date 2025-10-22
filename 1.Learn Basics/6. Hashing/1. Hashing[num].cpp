/*0:00 to 22:07*/
#include<bits/stdc++.h>
using namespace std;
/*
int arr[1e7] // 10^7 glbally
bool arr[]  //10^8 globally
*/

int func(int number, int arr[], int n){
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == number){
            cnt = cnt+1;
        }
    }
    return cnt;
}


int main(){
    // int arr[] = {1, 3, 2, 1, 3};
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];  //10^6 at max
    cout<<"Enter array Elelments: "<<endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    //precompute
    int hash[12] = {0};
    for (int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    while (q--){ //-->this line
        int num;
        cin>>num;
        //fetching
        cout<<num<<" appears "<<hash[num]<<" times"<<endl;
    }
    return 0;
}//check limit not working------???