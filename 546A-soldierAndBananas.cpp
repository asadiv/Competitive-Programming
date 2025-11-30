#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long k,n,w;
    cin>>k>>n>>w;
    long long cost=0,i=1;
    while (w--)
    {
        /* code */
        cost+=k*i;
        i++;
    }
    if(cost<=n){
        cout<<0<<endl;
    }else{
        cout<<cost-n<<endl;
    }

    return 0;
}