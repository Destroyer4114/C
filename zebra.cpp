#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cj=0,pl=0,ppl=0;  
        char l=s[0];   

        for (int i=1;i<n;i++){
            if (s[i]!=l){
                cj++;
                l=s[i];
                ppl=pl;
                pl=i;
            }
            else{
                pl++;
            }

        }

        if (k>cj){
            cout<<-1<<endl;
        }
        else{
            if(k%2==0){
                if(s[0]==l){
                    cout<<pl<<endl;
                }
                else{
                    cout<<ppl<<endl;
                }
            }
            else{
                if(s[0]!=l){
                    cout<<pl<<endl;
                }
                else{
                    cout<<ppl<<endl;
                }
                
            }
        }
        

    }
}    