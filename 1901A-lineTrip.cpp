// #include <bits/stdc++.h>
// #include<cmath>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     int n,x;
//     cin>>t;
//     while (t--)
//     {
//         cin>>n>>x;
//         int tank=0,mintank=0,station=0;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         for(int i=1;i<=x;i++){
//             tank--;
//             if(i==arr[station]){
//                 if(tank<mintank){
//                     mintank=tank;
//                 }
//                 tank=0;
//                 if(station<n-1){
//                     station++;
//                 }
//                 continue;
//             }
            
//         }
//         for(int i=x-1;i>=0;i--){
//             tank--;
//             if(i==arr[station]){
//                 if(tank<mintank){
//                     mintank=tank;
//                 }
//                 tank=0;
//                 if(station>0){
//                     station--;
//                 }
//                 continue;
//             }
            
//         }

//         cout<<abs(mintank)<<endl;

//     }
    

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int &v : a) cin >> v;

        int mx = a[0]; // gap from 0 to first station

        for (int i = 1; i < n; i++) {
            mx = max(mx, a[i] - a[i - 1]);
        }

        mx = max(mx, 2 * (x - a[n - 1])); // return gap

        cout << mx << "\n";
    }
}
