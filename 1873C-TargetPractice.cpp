#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string arr[10];
        for(int i=0;i<10;i++){
            cin>>arr[i];
        }
        int score=0;
        for(int i=0;i<10;i++){
            int charPos=1;
            for(char ch:arr[i]){
                if(ch=='X'){
                    int lineNo=i+1;
                    if(lineNo==1 || lineNo==10){
                        score+=1;
                    }
                    else if(lineNo==2 || lineNo==9){
                        if(charPos==1 || charPos==10){
                            score+=1;
                        }else{
                            score+=2;
                        }
                    }
                    else if(lineNo==3 || lineNo==8){
                        if(charPos==1 || charPos==10){
                            score+=1;
                        }else if(charPos==2 || charPos==9){
                            score+=2;
                        }else{
                            score+=3;
                        }
                    }
                    else if(lineNo==4 || lineNo==7){
                        if(charPos==1 || charPos==10){
                            score+=1;
                        }else if(charPos==2 || charPos==9){
                            score+=2;
                        }else if(charPos==3 || charPos==8){
                            score+=3;
                        }else{
                            score+=4;
                        }
                    }
                    else if(lineNo==5 || lineNo==6){
                        if(charPos==1 || charPos==10){
                            score+=1;
                        }else if(charPos==2 || charPos==9){
                            score+=2;
                        }else if(charPos==3 || charPos==8){
                            score+=3;
                        }else if(charPos==4 || charPos==7){
                            score+=4;
                        }else{
                            score+=5;
                        }
                    }
                }
                charPos++;
            }
        }
        cout<<score<<endl;
    }



//     int score[10][10] = {
// 	{1,1,1,1,1,1,1,1,1,1},
// 	{1,2,2,2,2,2,2,2,2,1},
// 	{1,2,3,3,3,3,3,3,2,1},
// 	{1,2,3,4,4,4,4,3,2,1},
// 	{1,2,3,4,5,5,4,3,2,1},
// 	{1,2,3,4,5,5,4,3,2,1},
// 	{1,2,3,4,4,4,4,3,2,1},
// 	{1,2,3,3,3,3,3,3,2,1},
// 	{1,2,2,2,2,2,2,2,2,1},
// 	{1,1,1,1,1,1,1,1,1,1}
// };
 
// void solve() {
// 	int ans = 0;
// 	for (int i = 0; i < 10; i++) {
// 		for (int j = 0; j < 10; j++) {
// 			char c;
// 			cin >> c;
// 			if (c == 'X') {ans += score[i][j];}
// 		}
// 	}
// 	cout << ans << '\n';

    return 0;
}