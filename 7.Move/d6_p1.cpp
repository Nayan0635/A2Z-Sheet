// Find the leaders in the array
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
    public:
    /*vector<int> leaders_2(int n,int arr[]){  //BRUTE FORCE
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int leader = true;
            for (int j = i+1; j < n; j++)
            {
                if(arr[j] > arr[i]){
                    leader = false;
                    break;
                }
            }
            if(leader == true) ans.push_back(arr[i]);
        }
        return ans;
    }*/
    vector<int> leaders(int n,int arr[]){//optimal
        vector<int> ans;
        int maxi = INT_MIN;
        for (int i = n-1; i > 0; i--)//start from the last
        {
            if(arr[i] > maxi){
                maxi = arr[i];
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }

};

int main(){
    int arr[] = {10, 22, 12, 3, 0 ,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution s;
    vector<int> result = s.leaders(n, arr);
    for(int i: result)
        cout<< i<<" "; //arr[i] is the index, i is the element
    cout<<endl;
    return 0;
}
