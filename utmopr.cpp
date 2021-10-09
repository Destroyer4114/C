#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],s=0;

        for (int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if (s%2==0){
            if(k==1){
                cout<<"odd"<<endl;

            }
            else{
                cout<<"even"<<endl;
            }

        }
        else{
            cout<<"even"<<endl;
        }
        

    }
}    