#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string name,storeName;
    cin>>name;
    int distChars=0;
    for(char ch :name){
        if(storeName.find(ch)!=string::npos){
            continue;
        }
        else{
            distChars++;
            storeName+=ch;
        }
    }
    if(distChars%2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string name;
//     cin >> name;

//     set<char> s(name.begin(), name.end());

//     if (s.size() % 2 == 0)
//         cout << "CHAT WITH HER!";
//     else
//         cout << "IGNORE HIM!";
// }
