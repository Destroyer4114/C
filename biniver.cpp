#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j=0;
        cin>>n;
        long long int a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
            if (a[i]%2!=0){
                j=1;
            }
        }
        if(j==1){
            cout<<0<<endl;
        }
        else{
            int c=0;
            while(j==0){
                c+=1;
                for (int i=0;i<n;i++){
                    a[i]= a[i]/2;
                    if (a[i]%2!=0){
                        j=1;
                        break;
                    }

                }
            }
            cout<<c<<endl;
            

        }

    }
}    