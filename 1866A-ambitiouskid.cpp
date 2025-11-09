#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,min=0;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    min = abs(arr[0]);
    for(int i=0;i<n;i++){
        if(abs(arr[i])<min){
            min=abs(arr[i]);
        }
        
    }
    cout<<min<<endl;

    return 0;
}