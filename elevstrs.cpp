#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float n ,v1,v2;
        cin>>n>>v1>>v2;
        if (1.4142/v1 < 2/v2){
            cout<<"Stairs"<<endl;
        }
        else{
            cout<<"Elevator"<<endl;
        }
        

    }
}    