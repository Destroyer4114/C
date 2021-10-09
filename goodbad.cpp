#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,cs=0,cl;
        cin>>n>>k;
        string s;
        cin>>s;
        for (int i=0;i<n;i++){
            if ((int)s[i]<=122 && (int)s[i]>=97){
                cs++;

            }

        }
        
        cl=n-cs;

        if(cl<=k && cs<=k){
            cout<<"both"<<endl;
        }
        else if(cl<=k){
            cout<<"chef"<<endl;
        }
        else if(cs<=k){
            cout<<"brother"<<endl;
        }
        else{
            cout<<"none"<<endl;
        }



        

    }
}    