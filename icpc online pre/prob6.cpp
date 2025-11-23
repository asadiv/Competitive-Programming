#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
const int mx = 4000;
long long fct[mx+1], invf[mx+1];

long long pw(long long a,long long b){
    long long r=1;
    while(b>0){
        if(b&1) r=r*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return r;
}

long long c(int n,int k){
    if(k<0||k>n) return 0;
    return fct[n]*invf[k]%mod*invf[n-k]%mod;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);



    fct[0]=1;
    for(int i=1;i<=mx;i++){
        fct[i] = fct[i-1] * i%mod;

    } 
    invf[mx]=pw(fct[mx],mod-2);
    for(int i=mx;i>0;i--){
        invf[i-1] =invf[i] * i%mod;
    } 

    int n;
    cin>>n;
    map<pair<int,int>,long long> fr;
    vector<pair<int,int>> bxs;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        fr[{a,b}]++;
    }

    for(auto &p:fr){
        bxs.push_back(p.first);
    } 
        

    long long ans=0;
    int k=bxs.size();

    for(auto &p:fr){
        long long f=p.second;
        if(f>=2){
            int aa=p.first.first,bb=p.first.second;
            long long w=c(aa+aa+bb+bb,aa+aa);
            ans=(ans+f*(f-1)/2%mod*w)%mod;
        }
    }

    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            int a1=bxs[i].first,b1=bxs[i].second;
            int a2=bxs[j].first,b2=bxs[j].second;
            long long w=c(a1+a2+b1+b2,a1+a2);
            ans=(ans+fr[bxs[i]]*fr[bxs[j]]%mod*w)%mod;
        }
    }

    cout<<ans%mod;
    return 0;
}
