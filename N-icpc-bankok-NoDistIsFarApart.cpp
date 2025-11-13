#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b;
    cin>>n>>a>>b;
    if(a+b+2<=n){
        // subtract people inlcuding both of them from whole and mid people will remian
        cout<<n-(a+b+2)<<endl;
    }else{
        // num of people will exceed n as there will be duplicates so subtract n to fin them
        cout<<(a+b)-n<<endl;
    }
    // icpc tutorial: |a+1 - n-b|-1   ath pos - bth pos -1 to avoid counting a or b
    return 0;
}