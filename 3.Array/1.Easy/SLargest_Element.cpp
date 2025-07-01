//function returns second largest element
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Solution{
    public:
    // if there is not any duplicate
    // int getSecondLargest(vector<int> &arr){          //Brute
    //     if(arr.size() < 2) return -1;
    //     sort(arr.begin(),arr.end());//T.c. O(nlogn)
    //     return arr[arr.size() - 2];
    // }

    // int getSecondLargest(vector<int> &arr){          //Better
    //     if(arr.size() < 2) return -1;
    //     int largest = *max_element(arr.begin(),arr.end());//T.c. O(n) get actual largest
    //     int slargest = INT_MIN;
    //     for (int i = 0; i < arr.size(); i++){//T.c. O(n)
    //         if (arr[i]>slargest && arr[i]!= largest)
    //             slargest = arr[i];
    //     }
    //     return slargest;
    // }
    
    int getSecondLargest(vector<int> &arr){             //Optimal
        if(arr.size() < 2) return -1;
        int largest = INT_MIN;
        int slargest = INT_MIN;
        for (int i = 0; i < arr.size(); i++){//T.c. O(n)
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
