//Array - simlilar data types being stored multiple times(consequtively)
//string also stores chracters in terms of every indexes
// string is storing characters within itself
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Striver";
    cout<<s[0]<<endl;;
    int length = s.size();
    int len = s.length();
    cout<<s[len - 1]<<endl;
    s[length - 1] = 'z';
    cout<<s;

    // 2D Array
    // int arr[3][5];
    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 5; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<"Elements are: "<<endl;
    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 5; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //1D array
    // int arr[5];
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5];
    // cout<<"Elements are: ";
    // cout<<arr[0]<<" "<<arr[2];
    
    return 0;
}
//51:33