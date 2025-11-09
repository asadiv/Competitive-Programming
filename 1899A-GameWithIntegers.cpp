#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        bool vanya=true,vova=false,vanyaWon=false;
        for(int i =0;i<10;i++){
            if(vanya==true){
                if(n%3==1){
                    n--;
                }
                else if(n%3==2){
                    n++;
                }
                else{
                    n++;
                }

                if(n%3==0){
                    cout<<"First\n";
                    vanyaWon=true;
                    break;
                }
            }
            else if(vova==true){
                if(n%3==1){
                    n--;
                }
                else if(n%3==2){
                    n++;
                }
                else{
                    n++;
                }
            }
            vanya = !vanya;
            vova = !vova;

        }
        if(vanyaWon!=true){
            cout<<"Second\n";
        }

    }


    // while(t--){
    //     cin>>n;
    //     if(n%3==0){
    //         cout<<"second\n";
    //     }else{
    //         cout<<"first\n";
    //     }
    // }
    

    return 0;
}