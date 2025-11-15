#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,k,x;
    cin>>t;
    while(t--){
        cin>>n>>k>>x;
        vector<int> arr;
        bool found=false;
        for(int i=1;i<=k;i++){
            // this one invalid for 7 3 1

            // if(n%i==0 && i!=x){
            //     int count=n/i;
            //     arr.insert(arr.end(),count,i);
            //     found=true;
            //     break;
            // }else if(n%i!=0 && i!=x){
            //     int reminder = n%i;
            //     if(reminder<=k && reminder!=x){
            //         int count = n/i;
            //         arr.insert(arr.end(),count,i);
            //         arr.push_back(reminder);
            //         found=true;
            //         break;
            //     }            
            // }



            int sum=0;
            bool wloop = true;
            if(i==x){
                wloop=false;
            }
            while (wloop)
            {
                if(sum+i>n){
                    arr.clear();
                    wloop=false;
                    break;
                }
                sum+=i;
                arr.push_back(i);
                if(sum==n){
                    found=true;
                    break;
                }
                else if(n-sum<=k && n-sum>=1 && n-sum!=x){
                    int last = n-sum;
                    sum+=last;
                    arr.push_back(last);
                    found=true;
                    break;
                }
                
            }
            if(found){
                break;
            }
            
        }
        if(found==true){
            cout<<"YES\n";
            cout<<arr.size()<<endl;
            for(int a : arr){
                cout<<a<<" ";
            }
            cout<<endl;
        }else{
            cout<<"NO\n";
        }
    }



    // actual sol
    // for _ in range(int(input())):
	// n, k, x = map(int, input().split())
	// if x != 1:
	// 	print("YES")
	// 	print(n)
	// 	print(*([1] * n))
	// elif k == 1 or (k == 2 and n % 2 == 1):
	// 	print("NO")
	// else:
	// 	print("YES")
	// 	print(n // 2)
	// 	print(*([3 if n % 2 == 1 else 2] + [2] * (n // 2 - 1)))

    return 0;
}