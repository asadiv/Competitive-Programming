#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long int t,n,q;
    cin>>t;
    while(t--){
        cin>>n>>q;
        vector<long int> a;
        for(int i=0;i<n;i++){
            long int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(int i=0;i<n;i++){
            long int temp;
            cin>>temp;
            if(a[i]<temp){
                a[i]=temp;
            }
        }

        for(int i=n-1;i>0;i--){
            if(a[i]>a[i-1]){
                a[i-1]=a[i];
            }
        }
        vector<long long> pref(n + 1, 0);

        for(int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + a[i];
        }
        for(int j=0;j<q;j++){
            long int l,r;
            cin>>l>>r;
            long long sum = pref[r] - pref[l - 1];
            cout << sum << " ";
        }
        cout<<endl;
        
    }

    return 0;
}