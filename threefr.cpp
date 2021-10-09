#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if((x+y ==z)||(x+y ==-z)||(-x+y ==z)||(-x+y ==-z)||(x-y ==z)||(x-y ==-z)||(-x-y ==z)||(-x-y ==-z)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        

    }
}           
    
    