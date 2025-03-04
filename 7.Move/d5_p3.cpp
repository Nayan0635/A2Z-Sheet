// Longest Subarray with Sum K
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lenOfLongSubarr(int A[], int N, int K){
        int sum = 0;
        int maxlen = 0;
        unordered_map<int,int> preSumMap;
        for (int i = 0; i < N; i++){
           sum+= A[i];
           if(sum == K) maxlen = max(maxlen, i+1);
           int rem = sum - K;
           if(preSumMap.find(rem) != preSumMap.end()){
                int len = i - preSumMap[rem];
                maxlen = max(maxlen, len);
            }
           if(preSumMap.find(sum) == preSumMap.end()){
                preSumMap[sum] = i;
            }
        }
        return maxlen;
    }
};

int main(){
    int arr[] = {10,5,2,7,1,9};
    int K = 15;
    int N = sizeof(arr)/sizeof(arr[0]);
    Solution s;
    cout<<s.lenOfLongSubarr(arr, N, K);
    return 0;
}