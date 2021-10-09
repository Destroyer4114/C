#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n;
        int a[n],b=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if (i!=j){
                    int r=0;
                    s= a[i]*a[j];
                    while(s>0){
                        r= r+ (s%10);
                        s= s/10;
                    }
                    if (r>b){
                        b=r;
                    }
                    


                }
            }
        }
        cout<<b<<endl;
    }
}