#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,r,cc,sum=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for (int i=0;i<k;i++){
            
            for (int j=i;j<n;j+=k){
                if(j>=k && j<n-k){
                    cc=1;
                    if(s[j]=='1'){
                        if (s[j-k]=='1'|| s[j+k]=='1'){
                            r=0;
                        }
                        else{
                            s[j+k]='1';
                            sum++;

                        }
                    }

                }
                else if(j<k && j<n-k){
                    cc=2;
                    if(s[j]=='1'){
                        if ( s[j+k]=='1'){
                            r=0;
                        }
                        else{
                            s[j+k]='1';
                            sum++;

                        }
                    }

                }
                else if(j>=k && j>=n-k){
                    cc=3;
                    if(s[j]=='1'){
                        if ( s[j-k]=='1'){
                            r=0;
                        }
                        else{
                            s[j-k]='1';
                            sum++;

                        }
                    }

                }
                else{
                    cc=4;
                    if(s[j]=='1'){
                        s[j]='0';
                        sum++;

                    }
                }
                // cout<<sum<<" "<<j<<" "<<cc<<endl;


            }
        }
        cout<<sum<<endl;
        
        

    }
}    