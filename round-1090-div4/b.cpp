#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int arr[7];
    cin>>t;
    while(t--){
        for(int i=0;i<7;i++){
            cin>>arr[i];
        }
        sort(arr,arr+7);
        int result=arr[6];
        for(int i=0;i<6;i++){
            result=result - arr[i];
        }
        cout<<result<<endl;
        result=0;
    }

    return 0;
}