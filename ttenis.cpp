#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int w=0,l=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if (s[i]=='1'){
                w++;
            }
            else{
                l++;
            }
        }
        // cout<<w<<l<<endl;
        if (w>l){
            cout<<"WIN"<<endl;
        }
        else{
            cout<<"LOSE"<<endl;
        }

        
    }
}