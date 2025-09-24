/*same as vector dynamic in nature
provides front operations as well*/
#include<bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> ls;

    ls.push_back(3);
    ls.emplace_back(4);
    ls.push_front(2);
    ls.emplace_front(1);

    // rest are all same

}
int main(){
    explainList();
    return 0;
}