#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t,k,n;
    cin>>t;
    while(t--){
        cin>>n>>k;
        bool found=false;
        if(n%2==0 || (n-k)%2==0){
            cout<<"Yes\n";
        }else{
            cout<<"no\n";
        }
// cuz if u subtract odd from odd it gives even, even from odd = odd




        // if(n%2==0){
        //     cout<<"yes\n";
        //     found=true;
        //     continue;
        // }else if(n%k==0){
        //     cout<<"yes\n";
        //     found=true;
        //     continue;
        // }else{
        //     long long remainder = n-2;
        //     while(remainder>=k){
        //         if(remainder%k==0){
        //             cout<<"yes\n";
        //             found=true;
        //             break;
        //         }
        //         else{
        //             remainder = remainder-2;
        //         }
        //     }
        // }
        // if(found==false){
        //     cout<<"No\n";
        // }
    }

    return 0;
}