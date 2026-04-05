#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=n-1;i>0;i--){
            for(int j=0;j<n;j++){
                arr[j] = arr[j]^arr[i];
            }
        }
        cout<<arr[0]<<endl;
        
    }

    return 0;
}