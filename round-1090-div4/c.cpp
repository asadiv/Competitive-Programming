#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int n2=n;
        for(int i=1;i<=n2;i++){
            cout<<i<<" "<<i+n<<" "<<i+n+1<<" ";
            n++;
        }
        cout<<endl;
    }

    return 0;
}