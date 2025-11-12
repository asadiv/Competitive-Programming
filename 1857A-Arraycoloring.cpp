#include <bits/stdc++.h>
using namespace std;


//  if sum is even then: if you remove one even num from even then the other part is still even
//  and if u remove odd the other part is odd aswell, this is not the case for odd 


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        //  or i could use int sum and just add input without using array
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum = accumulate(arr,arr+n,0);
        if(sum%2==0){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }

    return 0;
}