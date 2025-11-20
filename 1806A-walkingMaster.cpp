#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(b>d){
            cout<<-1<<endl;
            continue;
        }
        else{
            long long yDiff = d-b;
            a+=yDiff;
            if(a<c){
                cout<<-1<<endl;
                continue;
            }else{
                long long moveC = a-c;
                cout<<yDiff+moveC<<endl;
            }
        }
    }

    return 0;
}