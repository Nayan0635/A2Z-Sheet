//Print N to 1 without loop
#include<iostream>
using namespace std;

class Solution{
    public:
    void printNos(int N){
        if(N < 1) return;
        cout<<N<<" ";
        printNos(N-1);
    }
};

int main(){
    int num;
    Solution s;
    cout<<"Enter the number: ";
    cin>>num;
    s.printNos(num);

    return 0;
}