// contaier pair
#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int, int> pr = {1, 3};
    cout<<pr.first<<" "<<pr.second<<endl;

    pair<int, pair<int, int>> p = {2, {3, 5}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout<<"1st index second element"<<arr[1].second<<endl;
}
int main(){
    explainPair();
}