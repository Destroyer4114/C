#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        double s=0;
        cin>>n>>k;
        int a[n];
        for( int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        // for( int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        
        for(int i=k;i<n-k;i++){
            s+=a[i];

        }
        
        s= s/(n-2*k);
        cout<< fixed <<setprecision(6)<<s<<endl;


    }
}