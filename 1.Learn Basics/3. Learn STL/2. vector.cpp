#include<bits/stdc++.h>
using namespace std;

void explainVector(){

    // insert vector elements

    vector<int> v1(3);
    v1 = {1, 2, 3};
    v1.insert(v1.end(), 2, 6);//--> at index = 5, 2 times, insert value = 6
    v1.insert(v1.begin()+5, {6, 7, 8, 9});
    
    
    vector<int> v = {1, 2};
    v.push_back(4);
    v.emplace_back(5); //-->faster
    //v.insert(position_iterator, times, value)
    v.insert(v.begin()+2, 3);//-->insert value = 3 at index = 2;
    v.insert(v.end(), 10);   //-->keep till end insert value = 7
    v.insert(v.end()-1, v1.begin()+5, v1.begin()+9);//--> just know it

    vector<string> st;
    st.emplace_back(5, 'x'); //--> 5 times x
    
    vector<pair<int, int>> vec;               //--> vector pair
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);//-->create inplace


    vector<int> a(5, 100);//--> v = {100, 100, 100, 100, 100};
    vector<int>v3(a);//--> during intialization 
    // otherwise do this--> v3 = a;
    
    
    
    // access vector elements
    
    cout<<"v1 elements: ";
    for (auto& i : v1)   cout<<i <<" ";
    cout<<"\nv elements: ";
    for (auto& i : v)   cout<<i <<" ";
    cout<<"\nlast element "<<v.back()<<" "<<endl;

    for (auto& i : st)   cout<<i <<endl;//--> string so together always


    cout<<vec[0].first<<" "<<vec.at(1).first<<" ";//-->old is gold
    cout<<vec[0].second<<" "<<vec.at(1).second<<endl;


    vector<int> :: iterator it = v.begin(); //access using iterator
    it++;
    cout<<*(it)<<" ";
    it+=2;
    cout<<*(it)<<endl;



    // alter elements

    v.erase(v.begin());
    v.erase(v.begin()+1, v.begin()+5); //erase 1 to 4 index
    cout<<endl;

    v.pop_back(); //takes out the last element
    
    cout<<v.size();

    v1.swap(v);//complete swap vector elememts

    cout<<v.empty();//to check if vector empty?
    
    v.clear();
    v1.clear();
    
    cout<<v.empty();
}
int main(){
    explainVector();
    return 0;
}