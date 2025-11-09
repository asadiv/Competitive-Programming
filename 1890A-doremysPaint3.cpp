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
        long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==2){
            cout<<"yes\n";
            continue;
        }else if(n==3){
            if(arr[0]==arr[1] || arr[0]==arr[2] || arr[1]==arr[2]){
                cout<<"yes\n";
                continue;
            }else{
                cout<<"no\n";
                continue;
            }
        }
        else{
            //  failed for 11333 suitable for 1122 or 11122

            // sort(arr,arr+n);
            // bool firsthalf=true,sechalf=true;
            // if(n%2==0){
            //     for(int i=0;i<n/2-1;i++){
            //         if(arr[i]!=arr[i+1]){
            //             cout<<"No\n";
            //             firsthalf=false;
            //             break;
            //         }
            //     }
            //     if(firsthalf==true){
            //         for(int i=n/2;i<n-1;i++){
            //             if(arr[i]!=arr[i+1]){
            //                 cout<<"No\n";
            //                 sechalf=false;
            //                 break;
            //             }
            //         }
            //     }
            // }else{
            //     for(int i=0;i<n/2;i++){
            //         if(arr[i]!=arr[i+1]){
            //             cout<<"No\n";
            //             firsthalf=false;
            //             break;
            //         }
            //     }
            //     if(firsthalf==true){
            //         for(int i=n/2+1;i<n-1;i++){
            //             if(arr[i]!=arr[i+1]){
            //                 cout<<"No\n";
            //                 sechalf=false;
            //                 break;
            //             }
            //         }
            //     }
            // }
            
            // if(firsthalf!=false && sechalf!=false){
            //     cout<<"yes\n";
            // }

            set<long> st(arr,arr+n);
            if(st.size()>2){
                cout<<"No\n";

            }
            else if(st.size()==1){
                cout<<"yes\n";
            }
            else{
                int count1=0,count2=0;
                for(int i=0;i<n;i++){
                    if(arr[i]==arr[1]){
                        count1++;
                    }else{
                        count2++;
                    }
                }
                if(abs(count1-count2)==0 || abs(count1-count2)==1){
                    cout<<"yes\n";
                }else{
                    cout<<"no\n";
                }
            }         
        }
    }
    

    return 0;
}