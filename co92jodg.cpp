#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n],am=0,bm=0,sa=0,sb=0;
        for (int i=0;i<n;i++){
            cin>>a[n];
            if (a[n]>am){
                am=a[n];
            }
            sa+=a[n];
        }
        for (int i=0;i<n;i++){
            cin>>b[n];
            if (b[n]>bm){
                bm=b[n];
            }
            sb+=b[n];
        }
        sa-=am;
        sb-=bm;
        if (sa<sb){
            cout<<"Alice"<<endl;
        }
        else if (sa==sb){
            cout<<"Draw"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }

    }
}    