#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {10, 20 ,30, 40, 50};

    cout<<"v.begin()"<<endl;
    for (vector<int> :: iterator it = v.begin(); it!= v.end(); ++it){
        cout<<*it<<" ";
    }

    cout<<"\nv.end()"<<endl;
    for (vector<int> :: iterator it = v.end()-1; it>= v.begin(); --it){
        cout<<*it<<" ";
    }

    cout<<"\nv.rbegin()"<<endl;
    for (vector<int> :: reverse_iterator it = v.rbegin(); it!= v.rend(); ++it){
        cout<<*it<<" ";
    }

    cout<<"\nv.rend()"<<endl;
    for (vector<int> :: reverse_iterator it = v.rend()-1; it>= v.rbegin(); --it){
        cout<<*it<<" ";
    }
    return 0;
}