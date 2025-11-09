#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,a,totalContestants=0,prev;
    cin>>n>>k;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        
        if (i == k) 
            prev = a;

        if (i <= k && a > 0) {
            totalContestants++;
        }
        else if (i > k && a == prev && a > 0) {
            totalContestants++;
        }
    }

    cout<<totalContestants;

    return 0;
}