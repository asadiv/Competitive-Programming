#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>x;
            if(x!=0){
                cout<<(abs(3-i)+abs(3-j));
                return 0;
            }
        }
    }

}