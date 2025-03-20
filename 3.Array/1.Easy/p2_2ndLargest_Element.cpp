//function returns second largest element
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Solution{
    public://Optimal
    int getSecondLargest(vector<int> &arr){
        if(arr.size() < 2) return -1;
        int largest = INT_MIN;
        int slargest = INT_MIN;
        for (int i = 0; i < arr.size(); i++){//O(n)
            if (arr[i]>largest){
                largest = arr[i];
                slargest = largest;
            }
        }
        return slargest;
    }
};
int main(){
    vector<int> vec = {1, 7, 3, 9, 5};
    Solution s;
    cout<<s.getSecondLargest(vec);
    return 0;
}
//     public://Brute
//     int getSecondLargest(vector<int> &arr){//if there is not any duplicate
//         if(arr.size() < 2) return -1;
//         sort(arr.begin(),arr.end());//T.c. O(nlogn)
//         return arr[arr.size() - 2];
//     }
//
//     public: //Better
//     int getSecondLargest(vector<int> &arr){
//         if(arr.size() < 2) return -1;
//         int largest = *max_element(arr.begin(),arr.end());//O(n)-->get actual largest
//
//         int slargest = INT_MIN;
//         for (int i = 0; i < arr.size(); i++){//O(n)
//             if (arr[i]>slargest && arr[i]!= largest){
//                 slargest = arr[i];
//             }
//         }
//         return slargest;
//     }
