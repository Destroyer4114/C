#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1[4],s2[4];
        int s;
        cin>>s1[0]>>s1[1]>>s1[2]>>s1[3];
        cin>>s2[0]>>s2[1]>>s2[2]>>s2[3];
        for (int i=0 ;i<4;i++){
            for (int j=0 ;j<4;j++){
                if (s1[i]==s2[j]){
                    s++;
                }
            }
        }
        if (s>=2){
            cout<<"similar"<<endl;
        }
        else{
            cout<<"dissimilar"<<endl;
        }

    }
}    