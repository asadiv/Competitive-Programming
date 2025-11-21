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
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        int x_or=0;
        for(int a:v){
            x_or^=a;
        }
        if(n%2==1){
            cout<<x_or<<endl;
        }else{
            if(x_or==0){
                cout<<x_or<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }

    return 0;
}