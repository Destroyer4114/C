#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int r=0;
        string s;
        cin>>s;
        for (int i=0;i<s.length();i=i+2){
            if((s[i]=='A' && s[i+1]=='A')||(s[i]=='B' && s[i+1]=='B')){
                r=1;
            }
        }
        if (r==1){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
}