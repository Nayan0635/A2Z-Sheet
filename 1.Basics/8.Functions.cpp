// modulorize the code....readability
//there cann't be repetation of function names
#include<bits/stdc++.h>
using namespace std;

// pass by referance --> send the original copy
void printValue(int arr[], int s){
    arr[0] += 100;
    cout<<"Value inside function call"<<endl;
    for (int i = 0; i < s; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {24, 125};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Value before function call"<<endl;
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    printValue(arr, n);
    cout<<"Value after function call"<<endl;
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// void print(string &str){
//     str[0] = 'S';
//     cout<<str<<endl;
// }
// int main(){
//     string s;
//     s = "Fuck";
//     print(s);
//     cout<<s<<endl;
//     return 0;
// }

//-->pass by value
// void print(string str){
//     str[0] = 'S';
//     cout<<str<<endl;
// }
// int main(){
//     string s;
//     s = "Fuck";
//     print(s);
//     cout<<s<<endl;
//     return 0;
// }

// -->return & parameterised
// int findMax(int a, int b){
//     return (a > b)?a : b;
// }
// int main(){
//     int a, b;
//     cin>>a>>b;
//     cout<<findMax(a, b);
//     return 0;
// }

// -->void & parameterised
// void Greet(string s){
//     cout<<"Hey "<<s<<"!";
// }
// int main(){
//     string name;
//     cin>>name;
//     Greet(name);
//     return 0;
// }

// -->void & non parameterised
// void printName(){
//     cout<<"Hey Welcome Commander";
// }
// int main(){
//     printName();
//     return 0;
// }