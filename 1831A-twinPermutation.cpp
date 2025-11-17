#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        map<int,int> maparr;
        int val=1;
        for(int i=n;i>0;i--){
            maparr[i] = val;
            val++;
        }

        for(int i=0;i<n;i++){
            cout<<maparr[arr[i]]<<" ";
        }
        cout<<endl;
    }

    return 0;



    
// void tc(){
//     ll n;
//     cin>>n;
//     for(ll i=0;i<n;i++){
//         ll x;
//         cin>>x;
//         cout<<n+1-x<<' ';
//     }
//     cout<<'\n';
// }
// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(0);
//     ll t; cin>>t; while(t--)
//         tc();
//     return 0;
// }




}