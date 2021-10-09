#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,r,x=0;
        cin>>n>>r;
        long long int t[n];
        long long int b[n];
        for(long long int i=0;i<n;i++){
            cin>>t[i];
        }
        for(long long int i=0;i<n;i++){
            cin>>b[i];
        }
        long long int mt=0;
        for(long long int i=0;i<n;i++){
            x=x+ b[i];
            mt = max(mt,x);
            if (i<n-1){
                x= x- r*(t[i+1]-t[i]);
                if (x<0){
                    x=0;
                }
            }

        }
        cout<<mt<<endl;

        

    }
}    