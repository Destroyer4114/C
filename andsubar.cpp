#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,s=1,p;
        cin>>n;
        while(s<n){
            s=s*2;
        }
        if(s==1){
            cout<<1<<endl;
            continue;
            
        }
        else if(s==n){
            cout<<n/2<<endl;
            continue;
        }
        s=s/2;
        p=max(s/2,n-s+1);
        cout<<p<<endl;




    }
}    