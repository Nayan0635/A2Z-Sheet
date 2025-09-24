/*Stack Data Structure
LIFO--> Last In First Out*/
#include<bits/stdc++.h>
using namespace std;

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
int main(){
    explainStack();
    return 0;
}