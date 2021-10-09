#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=s.length();
        int c0=0,c1=0;
        for(int i=0;i<a;i++){
            
            if (s[i]=='1'){
                c1++;
            }
            else{
                c0++;
            }
            
        }
        if(c1==1||c0==1){
            cout<<"Yes"<<endl;

            }
        else{
            cout<<"No"<<endl;
        }

    }
}