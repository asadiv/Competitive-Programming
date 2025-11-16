#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int negsum=0,posSum=0,moves=0;
        for(int a: arr){
            if(a==-1){
                negsum++;
            }else{
                posSum++;
            }
        }
        
        // if(negsum-posSum>0){
        //     moves+=(negsum-posSum);
        //     if(posSum%2!=0){
        //         moves++;
        //     }
        // }else if(negsum-posSum==0){
        //     if(negsum%2!=0){
        //         moves++;
        //     }
        // }


        while (negsum>posSum){
            negsum--;
            posSum++;
            moves++;
        }
        if(negsum%2!=0){
            negsum--;
            moves++;
        }
        
        
        cout<<moves<<endl;
    }

    return 0;
}