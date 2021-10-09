#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r=0;
        string s;
        cin>>s;
        if (s[0]==s[1]){
            r=1;
            
        }
        for (int i=2;i<s.length();i=i+2){
            if (s[i]!=s[0]){
                r=1;
                break;

            }
        }
        for (int i=3;i<s.length();i=i+2){
            if (s[i]!=s[1]){
                r=1;
                break;

            }
        }
        if(r==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}