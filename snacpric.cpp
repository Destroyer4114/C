#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int r;
    cin>>r;
    while(r--){
        int l,f=1;
        cin>>l;
        string s;
        cin>>s;
        // cout<<s[0]<<endl;
        int nh=0,nt=0;
        for(int i=0 ;i<l;i++){
            if (s[i]=='H'){
                nh++;
            }
            if (s[i]=='T'){
                nt++;
            }
            if ((nh -nt>1)||(nt-nh>0)){
                f=0;
                break;
            }

        }
        if(nh!=nt){
            f=0;
        }
        // cout<<nh<<nt<<endl;
        if(f==0){
            cout<<"Invalid"<<endl;
        }
        else{
            cout<<"Valid"<<endl;
        }
    }
}