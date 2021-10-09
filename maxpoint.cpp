#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,y,z,maxm=0;
        cin>>a>>b>>c>>x>>y>>z;
        for (int i=0;i<21;i++){
            for (int j=0;j<21;j++){
                for (int k=0;k<21;k++){
                    if (a*i+b*j+c*k<=240){
                        maxm= max(maxm,x*i+y*j+z*k);
                    }
                }
            }

        }
        cout<<maxm<<endl;
        

    }
}    