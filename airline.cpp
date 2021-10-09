#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while ((t--))
    {
        int a,b,c,d,e,s=0;
        cin>>a>>b>>c>>d>>e;

        if ( a+b<=d && c<=e){
            s=1;
        }
        else if ( a+c<=d && b<=e){
            s=1;
        }
        else if ( c+b<=d && a<=e){
            s=1;
        }

        if (s==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
}