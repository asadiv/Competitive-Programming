#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int temp;cin>>temp;a.push_back(temp);
        }
        sort(a.begin(), a.end(), greater<int>());
        int index;
        for(int j=0;j<n;j++){
            bool found = (find(a.begin(), a.end(), j+1) != a.end());
            if(found){
                cout<<1<<" ";
                continue;
            }else{
                
                for(int i=0;i<n;i++){
                    if((j+1)<a[i]){
                        continue;
                    }else{
                        if((j+1)%a[i]==0){
                            int div1 = (j+1)/a[i];
                            bool found2 = (find(a.begin()+i, a.end(), div1) != a.end());
                            if(found2){
                                cout<<2<<" ";
                                found=true;
                                break;
                            }else{
                                if(a[i]==1){
                                    continue;
                                }
                                int prod=a[i];
                                int count1=1;
                                while (prod<(j+1))
                                {
                                    prod = prod*a[i];
                                    count1++;
                                }
                                if(prod==(j+1)){
                                    cout<<count1<<" ";
                                    found=true;
                                    break;
                                }
                                
                            }

                        }
                    }
                }
            }
            if(!found){
                cout<<-1<<" ";
            }

        }
        cout<<endl;

    }

    return 0;
}