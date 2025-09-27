#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n){
    if(i > n){
        return;
    }
    cout<<"Nayan"<<endl;
    printName(i+1, n);
}
/*

1.  void printName(1, 3){
        if(1 > 3){          -->No
            return;
        }
        cout<<"Nayan"<<endl;       -->Nayan
        printName(2, 3);           --> printName1()
    }

2.  void printName(2, 3){
        if(2 > 3){          -->No
            return;
        }
        cout<<"Nayan"<<endl;       -->Nayan 
        printName(3, 3);           --> printName1() | printName2() |
    }

3.  void printName(3, 3){
        if(3 > 3){          -->No
            return;
        }
        cout<<"Nayan"<<endl;     -->Nayan
        printName(4, 3);         -->printName1() | printName2() | printName3() |
    }

4.  void printName(4, 3){
        if(i4 > 3){         -->Yes
            return;         -->terminate
        }
        cout<<"Nayan"<<endl;
        printName(i+1, n);
    }

*/


int main(){
    int n = 3;//n-->3
    // cin>>n;
    printName(1,n);
    return 0;
}
