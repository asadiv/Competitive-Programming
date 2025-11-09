#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // for(int i=1;i<n-1;i++){
        //     if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
        //         int temp = arr[i];
        //         arr[i] = arr[i+1];
        //         arr[i+1] = temp;
        //     }
        // }
        // if(is_sorted(arr,arr+n)){
        //     cout<<"Yes\n";
        // }else{
        //     cout<<"No\n";
        // }
        if(arr[0]==1){
            cout<<"yes\n";

        }else{
            cout<<"No\n";
        }
    }
    

    return 0;
}