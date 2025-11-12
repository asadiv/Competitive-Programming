#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a+c>b+c){
            cout<<"First\n";
        }else if(a+c<b+c){
            cout<<"Second\n";
        }
        else if(a+c==b+c){
            if(c%2==0){
                cout<<"Second\n";
            }else{
                cout<<"First\n";
            }
        }
    }

    return 0;
}