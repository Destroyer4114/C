#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,nd=0,ns=0,r;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        for (int i=0;i<n;i++){
            if(s[i]=='0'){
                nd++;
            }
            else{
                ns++;
            }

        }
        r= nd*a + ns*b;
        cout<<r<<endl;
    }
}