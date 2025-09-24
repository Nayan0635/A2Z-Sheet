/*not Linear Data Structure it's a Tree Data Sturucture*/
/*
#include<iostrream>
#include<queue>
#include<functional>
#include<vector>
*/
#include<bits/stdc++.h>
using namespace std;

void explainPQ(){
    priority_queue<int> pq;

    pq.push(5);//{5}
    pq.push(2);//{5, 2}
    pq.push(8);//{8, 5, 2}
    pq.emplace(10);//{10, 8, 5, 2}

    cout<<pq.top();//print 10

    pq.pop();

    cout<<pq.top();//print 8

    // size, swap, empty same as other

    // Minimun Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    /*priority_queue<[what we store], [where we store], [how we compare]>
    less-->max-heap(largets at top)
    greater-->min-heap(smallest at top)
    */
    
    pq.push(5);//{5}
    pq.push(2);//{2, 5}
    pq.push(8);//{2, 5, 8, 10}
    pq.emplace(5);

    pq.top();//print 2
}

int main(){
    explainPQ();
    return 0;
}