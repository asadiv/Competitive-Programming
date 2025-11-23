#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,q,L,R;
    cin>>n>>q;
    vector<long long> v;
    for(int i=0;i<n;i++){
        long long temp;
        cin>>temp;
        v.push_back(temp);
    }
    while (q--)
    {
        cin>>L>>R;
        map<long long,long long> freq;
        for(int i=L-1;i<R;i++){
            freq[v[i]]++;
        }
        bool found = false;

        for (auto &p : freq) {
            if (p.second > (R-L+1) / 2) {
                cout << p.first << "\n";
                found = true;
                break;
            }
        }

        if (!found) cout << 0 << "\n";
    
    }
    

    return 0;
}