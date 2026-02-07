#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,x,s;
    cin>>t;
    while(t--){
        cin>>n>>s>>x;
        int sum=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            sum=sum+temp;
        }
        if(sum==s){
            cout<<"yes\n";
            continue;
        }else if(sum<s){
            while(sum<s)
            {
                sum=sum+x;
            }
            if(sum==s){
                cout<<"yes\n";
                continue;
            }
            
        }
        cout<<"no\n";
    }

    return 0;
}