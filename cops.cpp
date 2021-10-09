#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int arr[100];
        for(int i=0;i<100;i++){
            arr[i]=1;
        }
        int m,x,y;
        cin>>m>>x>>y;
        int w=x*y;
        for(int i=0;i<m;i++){
            int z,a,b;
            cin>>z;
            if(z-1-w>0){
                a=z-1-w;
            }
            else{
                a=0;
            }
            if(z-1+w<100){
                b=z-1+w;
            }
            else{
                b=99;
            }
            
            for(int j=a;j<=b;j++){
                arr[j]=0;

            }
            

        }
        int s=0;
        for(int i=0;i<100;i++){
            s=s+arr[i];

        }
        cout<<s<<endl;
    }


}