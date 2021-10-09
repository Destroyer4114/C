#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if (k==n){
            for (int i=1;i<=n;i++){
               
            cout<<i<<" ";
            }
            cout<<endl;
            
        }
        else if (n-k!=1){
            for (int i=1;i<k+1;i++){
                cout<<i<<" ";

            }
            cout<<n<<" ";
            for (int i=k+1;i<n;i++){
               
            cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}    