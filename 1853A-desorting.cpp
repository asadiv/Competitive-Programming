#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        
        int mindiff = arr[1]-arr[0];
        int minindex = 0;
        for(int i=0;i<n-1;i++){
            if(mindiff > arr[i+1]-arr[i]){
                mindiff = arr[i+1]-arr[i];
                minindex = i;
            }
        }
        if(mindiff<0){
            cout<<0<<endl;
        }else{
            cout<<mindiff/2+1<<endl;
        }


            // int count=0;
            // while (arr[minindex]<=arr[minindex+1]){
            //     arr[minindex]++;
            //     arr[minindex+1]--;
            //     count++;
            // }

            // cout<<count<<endl;
            
            
        
    }

    return 0;
}