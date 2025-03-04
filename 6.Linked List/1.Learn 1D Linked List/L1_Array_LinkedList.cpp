//Array to Linked List
#include<iostream>
#include<vector>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    Node() {
       data = 0;
       next = NULL;
    }
    Node(int data1) {
       data = data1;
       next = NULL;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 0; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
        //mover = mover.next;
    }
    return head;
}
int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    Node* head = convertArr2LL(vec);
    cout<<head->data;
    return 0;
}