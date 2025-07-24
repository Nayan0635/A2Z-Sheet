// when you have If it's not mandetroy to have an else statement 
#include<iostream>
using namespace std;
int main(){
    // int marks;
    // cout<<"Enter your marks: ";
    // cin>>marks;
    // if (marks < 25)
    //     cout<<"F";
    // else if(marks <= 44)
    //     cout<<"B";
    // else if(marks <= 59)
    //     cout<<"A";
    // else if(marks <= 79)
    //     cout<<"E";
    // else if(marks <= 100)
    //     cout<<"O";

    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age < 18)
        cout<<"Not eligible for job";
    else if (age >= 18){
        cout<<"eligible for job";
        if (age>= 55 && age <= 57){
            cout<<", but retirement soon.";
        }
        else if (age > 57){
            cout<<" retirement time.";
        }
    }
    return 0;   
}
//35:07