#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c;
        d=abs(b-a);
        if(min(a,b)-1>=d){
            c=-1;
        }
        else if (c<=(d*2)){
            if(c>d){
                c=c-d;
            }       
            else{
                c= c+d;
            }
        }
        else{
            c=-1;
        }
        cout<<c<<endl;
    }

}