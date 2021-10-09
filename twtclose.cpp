#include<iostream>
using namespace std;

int main(){
    int n,k,c=0;
    cin>>n>>k;
    int tw[n+1]={0};

    for(int i=0;i<=k;i++){
        string s;
        cin>>s;
        if( s=="CLICK"){
            int r;
            cin>>r;
            if (tw[r]==1){
                tw[r]=0;
                c--;
            }
            else{
                tw[r]=1;    
                c++;

            }
        }
        else{
            int tw[n+1]={0};
            c=0;
        }
        cout<<c<<endl;
    }
}