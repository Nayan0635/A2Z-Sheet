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


    vector<int> vc = {10, 20 ,30, 40, 50};

    cout<<"vc.begin()"<<endl;
    for (vector<int> :: iterator it = vc.begin(); it!= vc.end(); ++it){
        cout<<*it<<" ";
    }

    cout<<"\nvc.end()"<<endl;
    for (vector<int> :: iterator it = vc.end()-1; it>= vc.begin(); --it){//pointing somewhere right after the last element
        cout<<*it<<" ";
    }

    cout<<"\nvc.rbegin()"<<endl;
    for (vector<int> :: reverse_iterator it = vc.rbegin(); it!= vc.rend(); ++it){
        cout<<*it<<" ";
    }

    cout<<"\nvc.rend()"<<endl;
    for (vector<int> :: reverse_iterator it = vc.rend()-1; it>= vc.rbegin(); --it){
        cout<<*it<<" ";
    }



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

/*same as vector dynamic in nature
provides front operations as well*/
void explainList(){
    list<int> ls;

    ls.push_back(3);
    ls.emplace_back(4);
    ls.push_front(2);
    ls.emplace_front(1);

    // rest are all same

}

/*same as list dynamic in nature
can access front elements and add in front as well*/
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

/*Stack Data Structure
LIFO--> Last In First Out*/
void explainStack(){
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{2, 1}
    st.push(3);//{3, 2, 1}
    st.push(3);//{3, 3, 2, 1}
    st.emplace(5);//{5, 3, 3, 2, 1}

    cout<<st.top()<<endl; //print 5 *index accessing not allowed*

    st.pop();//stack will look like this {3, 3, 2, 1}

    cout<<st.top()<<endl; //print 3

    cout<<st.size(); //no of elements --> 4

    cout<<st.empty();//checking if stack empty? False

    stack<int> st1, st2;
    st1.swap(st2);//swap stack elements
}

/*Queue Data Structure
FIFO-->First In First Out*/
void explainQueue(){
    queue<int> q;
    q.push(1);//{1}
    q.push(2);//{1, 2}
    q.emplace(4);//{1, 2, 4}

    q.back() += 5; //{1, 2, 9}
    cout<<q.back()<<endl; //print 9
    // Q --> {1, 2, 9}
    cout<<q.front(); // print 1

    q.pop();//{2, 9}

    cout<<q.front();// print 2

    // size, swap, empty same as stack
}

/*not Linear Data Structure it's a Tree Data Sturucture
#include<iostrream>
#include<queue>
#include<functional>
#include<vector>
*/
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
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    return 0;
}
