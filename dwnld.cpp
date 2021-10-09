#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,b=0;
        cin>>n>>k;
        while(n--){
            int ti,d;
            cin>>ti>>d;
           
            if (b==0){
                k= k-ti;
                if (k<0){
                    b= abs(k)*d;
                }
            }

            else{
                b=b+ ti*d;

            }
            
            


        }
        cout<<b<<endl;
        

    }
}    