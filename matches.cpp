#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,l;
        cin>>a>>b;
        int n[10]={6,2,5,5,4,5,6,3,7,6};
        long long int c= a+b;
        for (int i=1;i<=7;i++){
            if(c<pow(10,i)){
                l=i;    
                break;
            }
            
        }
        long long int count=0;
        for (int i=1;i<=l;i++){
            count+=n[c%10];
            c= c/10;
        }
        cout<<count<<endl;

        

    }
}    