#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    long long int a,b,xk,yk,xq,yq;
    while(t--){
        cin>>a>>b>>xk>>yk>>xq>>yq;
        int count=0;
        set<pair<int, int>> l1 = {
            {xk + a, yk + b},
            {xk + b, yk + a},
            {xk - a, yk - b},
            {xk - b, yk - a},
            {xk + a, yk - b},
            {xk - a, yk + b},
            {xk + b, yk - a},
            {xk - b, yk + a}
        };

        set<pair<int, int>> l2 = {
            {xq + a, yq + b},
            {xq + b, yq + a},
            {xq - a, yq - b},
            {xq - b, yq - a},
            {xq + a, yq - b},
            {xq - a, yq + b},
            {xq + b, yq - a},
            {xq - b, yq + a}
        };

        for(auto pair1 : l1){
            for(auto pair2 : l2){
                if(pair1==pair2){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}