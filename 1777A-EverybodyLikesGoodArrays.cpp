#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long int> a;
        for(int i=0;i<n;i++){
            long temp;
            cin>>temp;
            a.push_back(temp);
        }
        int count=0;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++){
            if(a[i]%2==0 && a[i+1]%2==0){
                count++;
            }
            else if(a[i]%2!=0 && a[i+1]%2!=0){
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}