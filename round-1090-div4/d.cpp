#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int num=1;
        for(int i=1;i<=n;i++){
            cout<<i*(i+1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}