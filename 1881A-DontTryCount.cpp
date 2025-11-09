#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,m,count=0;
    string x,s;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        cin>>x;
        cin>>s;
        count=0;
        if(x.find(s)!=string::npos){
            cout<<0<<endl;
            continue;
        }
        else if(x.length()<s.length()){
            while (x.length()<s.length())
            {
                x+=x;
                count++;
            }
            if(x.find(s)!=string::npos){
                cout<<count<<endl;
                continue;
            }
            else{
                x+=x;count++;
            }
            if(x.find(s)!=string::npos){
                cout<<count<<endl;
                continue;
            }
            else{
                cout<<-1<<endl;
            }

        }
        else if(x.length()>=s.length()){
            x+=x;
            count++;
            if(x.find(s)!=string::npos){
                cout<<count<<endl;
                continue;
            }
            else{
                cout<<-1<<endl;
            }

        }
        


        

    }
    

    return 0;
}


// worst case x=1 s=25 then double it 5 times so O(nm2^5)cuz with each itr x doubles nad for eaxh ch in x compare m chs of s
// def solve():
//     n, m = map(int, input().split())
//     x = input()
//     s = input()
//     for i in range(6):
//         if s in x:
//             print(i)
//             return
//         x += x
//     print(-1)

