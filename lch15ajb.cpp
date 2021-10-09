#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c[26]={0},r=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            int j = int(s[i])-97;
            // cout<<j<<endl;
            c[j]++;
            
        }
        if(n%2==0){
            for (int i=0;i<26;i++){
                if (c[i]==n/2){
                    r=1;
                }
            }
        }
        if (r==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        

    }
}    