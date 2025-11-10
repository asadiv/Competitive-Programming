#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long arr[n];
        vector<long> orgarr;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        orgarr.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                orgarr.push_back(arr[i]);
            }else{
                orgarr.push_back(arr[i]-1 !=0 ? arr[i]-1 : 1);
                orgarr.push_back(arr[i]);
            }
        }
        cout<<orgarr.size()<<endl;
        
        for(long x:orgarr){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}