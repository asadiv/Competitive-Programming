#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,count =0;
    cin>>n;
    string temp;
    cin>>temp;
    for(int i=0;i<n-1;i++){
        if(temp[i]==temp[i+1]){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}