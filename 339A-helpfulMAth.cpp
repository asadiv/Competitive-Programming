#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string term;
    cin>>term;
    bool swapped=false;
    for(int i=0;i<term.length();i++){
        for(int j=0;j<term.length()-1-i;j++){
            if(term[j]-'0'>term[j+2]-'0'){
                char temp = term[j];
                term[j]=term[j+2];
                term[j+2] = temp;
                swapped = true;
            }
            j++;
        }
        if(swapped==false){
            break;
        }
    }
    cout<<term;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     vector<char> nums;

//     for (char c : s) {
//         if (c != '+') nums.push_back(c);
//     }

//     sort(nums.begin(), nums.end());

//     for (int i = 0; i < nums.size(); i++) {
//         cout << nums[i];
//         if (i != nums.size() - 1) cout << "+";
//     }
// }

