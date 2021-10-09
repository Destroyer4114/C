#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        int dom[6]={1,2,5,10,50,100};
        for (int i=5;i>=0;i--){
            if(n>=dom[i]){
                sum+=(int)(n/dom[i]);
                n= n%dom[i];

            }
        }
        cout<<sum<<endl;


    }



}