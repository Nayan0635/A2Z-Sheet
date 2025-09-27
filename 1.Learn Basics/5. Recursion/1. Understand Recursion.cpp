/* video 19:19 come back
when a function calls itself
until a specified condition is met
segmentation fault -->stack overflow here numerous function calls waiting
*/

#include<bits/stdc++.h>
using namespace std;

void print(){
    static int cnt = 0;//persists accross calls
    if (cnt == 4)    return;
    else{
        cout<<cnt<<" ";
        cnt++;
        print();
    }
}

// void print(int cnt){//use a parameter
//     if (cnt == 4)    return;
//     else{
//         cout<<cnt<<" ";
//         print(cnt+1);
//     }
// }

// void print(){
//     int cnt = 0;
//     /*every time print is called recursively 
//     it's reinitialized to zero so it never reaches 0*/
//     if (cnt == 4)    return;
//     else{
//         cout<<cnt<<" ";
//         cnt++;
//         print();
//     }
//     /*it creates infinite recursion until stack overflow*/
// }
int main(){
    print();
    return 0;
}