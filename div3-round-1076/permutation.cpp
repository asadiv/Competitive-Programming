#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long int t,n;
    cin>>t;
    
    while(t--){
        cin>>n;
        vector<long int> a;
        for(long int i=0;i<n;i++){
            long int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(long int i=0;i<n;i++){
            auto it = max_element(a.begin()+i, a.end());
            int index = it - a.begin();
            if(index==i){
                continue;
            }else{
                reverse(a.begin()+i, a.begin() + index +1);
                break;
            }
        }
        for(long int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

}