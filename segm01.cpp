#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        //000000111100011
        string s;
        cin>>s;
        int l=0,r=0,c=0;;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                if(l==0){
                    l=1;
                }
                if(l==2){
                    r=1;
                    break;
                }
                c++;
                
            }
            else{
                if(l==1){
                    l=2;
                }
            }
            
        }
        if (c==0){
            r=1;
        }
        if(r==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}