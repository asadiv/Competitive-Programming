// #include <bits/stdc++.h>
// using namespace std;




// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

    
//    int t;
//    cin>>t;
//    while(t--){
//        long long k,n;
//        cin>>k;
//        cin>>n;
//        vector<long long> a;
//        for(int i=0;i<n;i++){
//            long long temp;
//            cin>>temp;
//            a.push_back(temp);
//        }
//         vector<pair<long long,int>> minima;
//         vector<pair<long long,int>> maxima;
//         vector<long long> profits;

//         for (int i = 1; i < n - 1; i++) {
//             if (a[i] < a[i - 1] && a[i] < a[i + 1]) {
//                 minima.push_back({a[i], i});
//             }
//             if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
//                 maxima.push_back({a[i], i});
//             }
//         }

//         for (auto &mx : maxima) {
//             for (auto &mn : minima) {
//                 if (mn.second < mx.second) {  
//                     profits.push_back(mx.first - mn.first);
//                 }
//             }
//         }

//         sort(profits.begin(), profits.end());
//         reverse(profits.begin(), profits.end());
//         long long ans=0;
//         for(int i=0;i<k;i++){
//             ans+=profits[i];
//         }
//         cout<<ans<<endl;




        
        
        
//    }



//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

long long maxProfitAtMostK(int k, const vector<int>& prices) {
    int n = prices.size();
    if (n <= 1 || k == 0) return 0;
    // If k >= n/2, it's unlimited transactions: sum positive diffs
    if (k >= n/2) {
        long long ans = 0;
        for (int i = 1; i < n; ++i)
            if (prices[i] > prices[i-1]) ans += prices[i] - prices[i-1];
        return ans;
    }

    vector<long long> dp_prev(n, 0), dp_cur(n, 0);

    for (int t = 1; t <= k; ++t) {
        long long maxDiff = -prices[0]; // max(dp_prev[j] - prices[j])
        dp_cur[0] = 0;
        for (int i = 1; i < n; ++i) {
            dp_cur[i] = max(dp_cur[i-1], prices[i] + maxDiff);
            maxDiff = max(maxDiff, dp_prev[i] - (long long)prices[i]);
        }
        dp_prev.swap(dp_cur);
    }
    return dp_prev[n-1];
}

int main() {
    int t;
   cin>>t;
   while(t--){
       long long k,n;
       cin>>k;
       cin>>n;
       vector<int> a;
       for(int i=0;i<n;i++){
           long long temp;
           cin>>temp;
           a.push_back(temp);
       }

    cout << maxProfitAtMostK(k, a) << endl; 
   }
    return 0;
}
