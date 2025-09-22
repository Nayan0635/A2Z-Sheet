#include<bits/stdc++.h>
using namespace std;

void explainVector(){

    // define container
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);//-->fatser

    vector<string> str;
    str.emplace_back(5, 'x'); //--> 5 times x
    for (auto& i : str){
       cout<<i <<endl;
    }

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);//-->
    
    v{5, 100};//--> v = {100, 100, 100, 100, 100};

    v(5);//--> {0, 0, 0, 0, 0} or garbage value

    vector<int> v1(5, 20);
    vector<int> v2(v1);//--> copy of it


    // accessing vector elements
    cout<<v[0]<<" "<<v.at(1)<<endl;//-->old is gold
    
    vector<int> :: iterator it = v.begin();
    it++;
    cout<<*(it)<<endl;
    it+2;
    cout<<*(it)<<endl;

    v = {10, 20 , 30 ,40, 50};

    vector<int> :: iterator it = v.end();//pointing somewhere right after the last element
    it--;
    cout<<*(it)<<endl;

    // vector<int> :: iterator it = v.rend();
    // vector<int> :: iterator it = v.rbegin();
}
int main(){
    explainVector();
    return 0;
}