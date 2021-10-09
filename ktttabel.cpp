#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0;
        cin>>n;
        int a[n+1]={0},b[n];
        for (int i=0;i<n;i++){
            cin>>a[i+1];
        }
        for (int i=0;i<n;i++){
            cin>>b[i];
            if (b[i]<= a[i+1]-a[i]){
                s++;
            }
        }
        cout<<s<<endl;
    }

}    