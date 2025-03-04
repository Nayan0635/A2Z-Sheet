//find majority element 
#include<iostream>
#include<vector>
using namespace std;

class Brute{
    public:
    int majorityElement(vector<int>& nums){//Brute Force approach   O(n^2)
        int flag = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int flag = 0;
            for (int j = 0; i < j; j++){
                if(nums[i] == nums[j]) flag++;
            }
            if(flag > n/2) return nums[i];
        }
        return -1;
    }
};

class Hashing{//learning
    public:
    int majorityElement(vector<int>& nums){
        int hash[100] = {0};
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]] +=1;
        }
    }
};

class Solution{
    public://optimal
    int majorityElement(vector<int>& nums){//Moore's Voting algorithm-----(3)
        int majority = nums[0];
        int count = 1;
        for (int i: nums){//check which element is dominating
            if(i == majority) count++;
            else{
                count--;
                if(count == 0){
                    majority = i;//select new element is mojor
                    count = 1;
                }
            }
        }
        count = 0;
        // check wheather the element appearing more the half times
        for (int i: nums){
            if(i == majority) count++;
        }
        return (count > nums.size()/2)? majority : -1;
    }
};

int main(){
    vector<int> arr = {7,7,5,7,5,1,5,7,5,5,7,7};
    Hashing s;
    Solution p;
    int result = s.majorityElement(arr);
    if(result != -1)
    cout<<"majority element is :"<<result;
    else
    cout<<"No majority element presant";
    return 0;
}