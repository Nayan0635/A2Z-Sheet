//Introduction to Linked List
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{//self define data type
    public:
    int data;
    Node* next;
    public:
    Node(int data1){//constructor
        data = data1;
        next = nullptr;
    }
};
int main(){
    vector<int> arr = {2, 8, 7, 5};
    Node* y = new Node(arr[0]);
    cout<<y->data<<endl;//data
    cout<<y<<endl;//address
    cout<<y->next<<endl;
    return 0;
}
// Node x = Node(2,nullptr);