#include <bits/stdc++.h>
using namespace std;

void findSeq(vector<int> &arr,int x,int &n,long &sum,bool &sgn){
    if(sum==x){
        return;
    }else{
        int d1,d2,d3,d4;
        int nToUSe;
        if(sgn==true){
            nToUSe = n;
        }else{
            nToUSe = -n;
        }
        d1 = abs(((sum+nToUSe)-(n+1)) - x);
        d2 = abs(((sum+nToUSe)+(n+1)) - x);
        d3 = abs(((sum-nToUSe)+(n+1)) - x);
        d4 = abs(((sum-nToUSe)-(n+1)) - x);
        int mind = min(min(d1, d2), min(d3, d4));
        if(mind == d1 || mind == d2){
            arr.push_back(nToUSe);
            sum+=nToUSe;
            n++;
            if(mind==d1){
                sgn=false;
            }else{
                sgn=true;
            }
            findSeq(arr,x,n,sum,sgn);
        }else{
            arr.push_back(-nToUSe);
            sum-=nToUSe;
            n++;
            if(mind==d4){
                sgn=false;
            }else{
                sgn=true;
            }
            findSeq(arr,x,n,sum,sgn);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long t,x;
    cin>>t;
    while(t--){
        cin>>x;
        int n=1;
        long sum = 0;
        vector<int> arr;
        bool sgn=true;
        findSeq(arr,x,n,sum,sgn);
        cout<<n<<endl;
        for(int a:arr){
            if(a==1){
                cout<<a;
            }
            else if(a>0 && a!=1){
                cout<<"+"<<a;
            }
            else if(a<0){
                cout<<a;
            }
        }



        // if(x==0){
        //     cout<<3<<endl;
        //     cout<<"1+2-3"<<endl;
        //     break;
        // }
        // vector<int> arr;
        // long sum=0;
        // for(int i=1;i>0;i++){
        //     if(sum==x){
        //         cout<<i-1<<endl;
        //         for(int a:arr){
        //             if(a==1){
        //                 cout<<a;
        //             }
        //             else if(a>0 && a!=1){
        //                 cout<<"+"<<a;
        //             }
        //             else if(a<0){
        //                 cout<<a;
        //             }
        //         }
        //         break;
        //     }
        //     else if(sum+i<abs(x)){
        //         arr.push_back(i);
        //         sum+=i;
        //     }
        //     else if(sum+i>abs(x)){
        //         arr.push_back(-i);
        //         sum-=i;
        //     }
        // }
        
    }

    return 0;
}