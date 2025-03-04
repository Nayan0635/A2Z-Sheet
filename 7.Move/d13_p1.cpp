/*find the square root of an element
find the max element squaring whom we will get the elememt
means high will be the answer*/
#include<iostream>
using namespace std;

class Solution{
    public:
    int  floorSqrt(int x){
        int  low = 1, high = x;//x/2? then do it for 0,1;
        while(low <= high){
            int  mid = low + (high - low)/2;            
            long long val = static_cast<long long> (mid)*mid;
            if(val <= x)
                low = mid + 1;
            else 
                high = mid - 1;
        }
        return high;
    }
};
int main(){
    int  x = 1;
    Solution s;
    cout<<"Floor of the number is: "<<s.floorSqrt(x);
    return 0;
}