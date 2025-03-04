// best time to buy and sell a stock
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int maxProfit(vector<int>& prices){
        int mini = prices[0];
        int cost;
        int maxprofit = 0;
        
        for(int i = 0; i<prices.size(); i++){
            cost = prices[i] - mini;
            maxprofit = max(maxprofit, cost);
            mini = min(mini, prices[i]);
        }
        return maxprofit;
    }
};

int main(){
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    Solution s;
    cout<<"max profit is "<<s.maxProfit(arr)<<endl;
    return 0;
}