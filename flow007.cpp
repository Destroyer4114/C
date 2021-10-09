#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l=0,m;
        while(n>0){
            m= n%10;
            l= (int)(l*10) +m;
            n= (int)(n/10);
        }
        cout<<l<<endl;
    }
}


