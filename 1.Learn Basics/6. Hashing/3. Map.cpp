/*34:52 to 
map<key, value>
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> mpp; //and all set
    // unordered_map<int, int> mpp;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>> arr[i];
        mpp[arr[i]]++;
    }
    // pre-compute
    
    // map stores all the values in sorted order
    for (auto& it : mpp){
       cout<<it.first <<"-->"<<it.second <<endl;
    }

    int q;
    cin>> q;
    while(q--){
        int number;
        cin>> number;
        // fetch
        cout<<mpp[number] <<endl;
    }
    return 0;
}
/*
ordered map -> storing & fetching bot takes logN T.C.--> in best worst avg case

unordered_map -> storing & fetching bot takes O(1) T.C.--> in best and avg case
yes fixed T.C. but in worst case O(N) but once in a bluemoon 
    it happens because of internal collision

    Hashing --> (i) Division method
                (ii) Folding method
                (iii) Mid square method

mpp<pair<int,int>, int>
unordered_map<no u cann't do the same>
*/