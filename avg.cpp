#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,v,s=0;
        cin>>n>>k>>v;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];

        }
        int l= v*(n+k);
        int r= (l-s);
        if (r%k==0 && r>0){
            cout<<r/k<<endl;
        }
        else{
            cout<<-1<<endl;
        }


        

    }
}    