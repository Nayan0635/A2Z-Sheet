/*same as list dynamic in nature
can access front elements and add in front as well*/
#include<bits/stdc++.h>
using namespace std;

void explainDeque(){
    deque<int> dq;

    dq.push_back(3);
    dq.emplace_back(4);
    dq.push_front(2);
    dq.emplace_front(1);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();
    // rest are all same

}
int main(){
    explainDeque();
    return 0;
}