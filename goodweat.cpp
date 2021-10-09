#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[7],c0=0,c1=0;
        for (int i=0;i<7;i++){
            cin>>a[i];
            if(a[i]==1){
                c1++;
            }
            else{
                c0++;
            }

        }
        if(c1>c0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        

    }
}    