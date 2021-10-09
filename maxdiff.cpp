#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,d;
        cin>>n>>s;
        if (s>n){
            d=2*n-s;
        }
        else{
            d=s;

        }

        cout<<d<<endl;
        
        

    }
}    