//Find Union of Arrays         HOW YOU THINK
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution{
    public:
    // vector<int> findUnion(vector<int>& a, vector<int>& b){ //-->Brute
    //     set<int> st;
    //     int n1 = a.size();
    //     int n2 = b.size();
    //     for (int i = 0; i < n1; i++){
    //         st.insert(a[i]);         //--> T.C. O(n1logn)
    //     }
    //     for (int i = 0; i < n2; i++){
    //         st.insert(b[i]);         //--> T.C. O(n1logn)
    //     }
    //     vector<int> temp;
    //     for (auto& it : st){        //--> T.C. O(n1 + n2)
    //         temp.push_back(it);     //--> S.C. O(n1 + n2)
    //     }
    //     return temp;
    // }

    vector<int> findUnion(vector<int>& a, vector<int>& b){ //--> optimal
        int n1 = a.size();
        int n2 = b.size();
        int i = 0;
        int j = 0;
        vector<int> answer;
        while (i< n1 && j<n2){//till both pointers are pointing somewhere in both the arrray
            if (a[i] <= b[j]){
                if (answer.size() == 0 || answer.back() != a[i]){
                    answer.push_back(a[i]);
                }
                i++;
            }
            else{
                if (answer.size() == 0 || answer.back() != b[j]){
                    answer.push_back(b[j]);
                }
                j++;
            }
        }
        //remaining portion
        while (j < n2){//1st one got exhausted
            if (answer.size() == 0 || answer.back() != b[j]){
                    answer.push_back(b[j]);
                }
                j++;
        }
        while (i < n1){//2nd one got exhausted
            if (answer.size() == 0 || answer.back() != a[i]){
                    answer.push_back(a[i]);
                }
                i++;
        }
        return answer;     //--> T.C. O(n1 + n2) --> S.C. O(n1 + n2)
    }
};
int main(){
    vector<int> a1 = {1, 2, 3, 4, 5};
    vector<int> a2 = {4, 5, 6, 7};
    Solution s;
    vector<int> ans = s.findUnion(a1, a2);
    for (auto& it : ans){
       cout<<it <<" ";
    }
    return 0;
}