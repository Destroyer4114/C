#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=0;
        char l=s[0];
        for (int i=1;i<8;i++){
            if (s[i]!=l){
                c++;
                l=s[i];
            }


        }
        if (s[0]!=s[7]){
            c++;
        }
        if (c<=2){
            cout<<"uniform"<<endl;
        }
        else{
            cout<<"non-uniform"<<endl;
        }

        

    }
}    