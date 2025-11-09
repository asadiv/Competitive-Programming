#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x=0;
    string term;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>term;
        for(char ch:term){
            if(ch=='+'){
                x++;
                break;
            }
            else if(ch=='-'){
                x--;
                break;
            }
        }
    }
    cout<<x;

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, x = 0;
//     cin >> n;
//     string term;

//     while(n--) {
//         cin >> term;
//         if (term[1] == '+') x++;
//         else x--;
//     }

//     cout << x;
//     return 0;
// }
