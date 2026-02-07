#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v;
        int maxzeros = 0,currentZeros=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp==0){
                currentZeros++;
                if(currentZeros>maxzeros){
                    maxzeros = currentZeros;
                }
            }else if(temp!=0){
                currentZeros=0;
            }
            
        }

        cout<<maxzeros<<endl;
    }
    return 0;
    
    
}