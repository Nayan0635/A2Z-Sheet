/*22:07 to 34:52*/
/*256 characters no issue*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int q;
    cin>> q;

    // pre compute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }

    // fetch
    while (q--)
    {
        char c;
        cin>> c;
        cout<< hash[c - 'a']<< endl;
    }
    
    return 0;
}
