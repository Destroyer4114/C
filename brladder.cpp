#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
    
        if(abs(a-b)==2){
            cout<<"YES"<<endl;
        }
        else if (abs(a-b)==1){
            if(max(a,b)%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
        

    }
}    