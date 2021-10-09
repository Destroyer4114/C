#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s=n;
        int a[n],c=0,l=0;
        for (int i=0;i<n;i++){
            cin>>a[n];
            if(i>0){
                if (a[n]>=a[n-1]){
                    l=0;
                    c++;
                }
                else{
                    if(l==0){
                        l=1;
                        s+= c*(c+1)/2;
                        c=0;
                    }
                }

            }

        }
        cout<<s<<endl;

        

    }
}    