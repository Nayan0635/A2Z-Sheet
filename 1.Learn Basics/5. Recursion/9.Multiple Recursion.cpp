//Fibonacci Number--return nth fibonacci number.
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n = 4;
    fibonacci(n);
    return 0;
}
/* first--> fibonacci(n-1) then comes back
 + second--> fibonacci(n-2) go nd comes back;
 t.c. -> O(2^n) kind of

*/