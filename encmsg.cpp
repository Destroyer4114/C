#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for (int i=0;i<n-1;i+=2){
            char a= s[i];
            char b=s[i+1];
            a=(char)(97+26-(int)a);
            b=(char)(97+26-(int)b);
            s[i]=b;
            s[i+1]=a;
            cout<<s[i]<<s[i+1];

        }
        if(n%2!=0){
            char a=s[n-1];
            a=(char)(97+26-(int)a);
            cout<<a;

        }
        cout<<endl;

    }
}    