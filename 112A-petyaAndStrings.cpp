#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string one,two;
    cin>>one>>two;
    
    for(int i=0;i<one.length();i++){

        if(tolower(one[i])==tolower(two[i])){
            continue;
        }
        else if(tolower(one[i])<tolower(two[i])){
            cout<<-1;
            return 0;
        }
        else if(tolower(one[i])>tolower(two[i])){
            cout<<1;
            return 0;
        }

    }
    cout<<0;

    return 0;
}