#include<iostream>
using namespace std;

void explainpair(){
    pair<int, int> p = {1, 3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int, pair<int, int>> pr = {1, {2, 4}};
    cout<<p.first<<""<<pr.second.second<<" "<<pr.second.first<<endl;
}
int main(){
    explainpair();
    return 0;
}