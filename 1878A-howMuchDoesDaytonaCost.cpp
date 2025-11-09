#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,k;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        bool exist=false;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i =0;i<n;i++){
            if(k==arr[i]){
                cout<<"yes\n";
                exist=true;
                break;
            }
        }
        if(exist==false){
            cout<<"no\n";
        }
    }
    

    return 0;
}