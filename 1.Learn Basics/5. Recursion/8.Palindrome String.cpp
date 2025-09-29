#include<bits/stdc++.h>
using namespace std;

bool Palindrome(size_t i, string& str){
    if(i >= str.size()/2) return true;

    if (str[i] != str[str.size()-i-1])    return false;
    return Palindrome(i+1, str);
}
int main(){
    string s = "nayan";
    cout<<Palindrome(0, s);
    return 0;
}




// bool Palindrome(size_t i, string& str){
//     if(i >= str.size()/2) return true;

// bool Palindrome(int i, string& str){
//     if(i >= static_cast<int>(str.size())/2) return true;

// bool Palindrome(int i, string& str){
//     int n = str.size();
//     if(i >= n/2) return true;


