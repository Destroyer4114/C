#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ce=0,co=0,r,mo,me;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                ce++;
            }
            else{
                co++;
            }
        }
        if(n%2==0){
            mo= n/2;
            me= n/2;
        }
        else{
            me = ((n-1)/2)+1;
            mo = ((n-1)/2);
        }
        r= min(mo , co)+ min( me ,ce);
        cout<<r<<endl;
        



    }
}