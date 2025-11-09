#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,count=0,totalActions=0;
    string term;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cin>>term;
        for(int i=0;i<n;i++){
            if(term[i]=='.'){
                count++;
            }

            if(term[i]=='#' || i==n-1){
                if(count>=3){
                    totalActions=2;
                    count=0;
                    break;
                }
                else{
                    totalActions+=count;
                    count=0;
                    continue;
                }
                

            }
        }
        cout<<totalActions<<endl;
        totalActions=count=0;

    }
    

    return 0;
}