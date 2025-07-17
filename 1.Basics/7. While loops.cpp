#include<iostream>
using namespace std;
int main(){
    int number;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if (number <= 0){
            cout<<"That's not a positive number. /try again\n";
        }
        else
            cout<<"The positive number ";
    }while (number <= 0);
    cout<<"you entered is : "<<number<<endl;
        
    // int i;
    // while (i<=10){
    //     cout<<"Nayan"<<" "<<i<<endl;
    //     i = i+2;
    // }
    
    return 0;
}