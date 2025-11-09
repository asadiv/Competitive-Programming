#include<iostream>
using namespace std;

int main(){
    int n,len;
    string word;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>word;
        len = word.length();
        if(len>10){
            cout<<word[0]<<len-2<<word[len-1]<<endl;
        }
        else{
            cout<<word<<endl;
        }
    }
}