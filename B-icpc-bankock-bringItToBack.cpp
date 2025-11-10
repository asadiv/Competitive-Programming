#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        // vector<long> arr;
        if(n==2){
            if(m%2!=0){
                cout<<"2 1"<<endl;
            }else{
                cout<<"1 2"<<endl;
            }
        }else{
            if(n>m){
                for(int i=0;i<m;i++){
                    cout<<n-i<<" ";
                }
                for(int i=0;i<n-m;i++){
                    cout<<i+1<<" ";
                }
            }else{
                for(int i=n;i>0;i--){
                    cout<<i<<" ";
                }
            }
            cout<<endl;

        }



        // for(int i=0;i<n;i++){
        //     arr.push_back(i+1);
        // }
        // for(int i=0;i<m;i++){
        //     if(i==0){
        //         arr.insert(arr.begin(),arr.back());
        //         arr.pop_back();
        //     }
        //     else{
        //         arr.insert(arr.begin()+1,arr.back());
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }



        // for(int i=n;i>abs(n-m);i--){
        //     cout<<i<<" ";
        // }
        // for(int i=0;i<abs(n-m);i++){
        //     cout<<i+1<<" ";
        // }
        // cout<<endl;
    }

    return 0;
}