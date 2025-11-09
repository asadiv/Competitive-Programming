#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while (t--)
    {

        // sum is always zero cuz if A scores on B, then A+B=1+(-1)=0
        cin>>n;
        int arr[n-1];
        int sum=0;
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        cout<<-sum<<endl;

    }
    

    return 0;
}