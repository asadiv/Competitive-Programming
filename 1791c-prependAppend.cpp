// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t,n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         deque<int> s;
//         for(int i=0;i<n;i++){
//             int temp;
//             cin>>temp;
//             s.push_back(temp);
//         }
//         if(s.size()==0){
//             cout<<0<<endl;
//             continue;
//         }else if(s.size()==1){
//             cout<<1<<endl;
//             continue;
//         }

//         while(s.size()>1){
//             if((s.front()==0 && s.back()==0) || (s.front()==1 && s.back()==1)){
//                 break;
//             }else{
//                 s.pop_front();
//                 s.pop_back();

//             }
//         }
//         cout<<s.size()<<endl;

//     }

//     return 0;
// }




// i was taking ints inputs
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        string str;
        cin >> str;

        deque<char> s(str.begin(), str.end());

        while (s.size() > 1) {
            if (s.front() == s.back())
                break;
            s.pop_front();
            s.pop_back();
        }

        cout << s.size() << "\n";
    }
}
