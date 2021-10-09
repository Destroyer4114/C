#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<3<<endl;
        }
        else{
            string s(n-2, '0');
            cout<<1<<s<<5<<endl;
        }
        

    }
}    