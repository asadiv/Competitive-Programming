#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long> b,c;
        long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        b.push_back(arr[0]);
        int i=0;
        // push the smallest to b so that c cant divide it
        while (arr[i]==arr[i+1] && i<n-1)
        {
            b.push_back(arr[i+1]);
            i++;
        }
        i = b.size(); //after this greater elements start
        while (i<n)
        {
            c.push_back(arr[i]);
            i++;
        }

        if(b.size()>0 && c.size()>0){
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto x:b){
                cout<<x<<" ";
            }
            cout<<endl;
            for(auto x:c){
                cout<<x<<" ";
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }

        
        
    }

    return 0;
}