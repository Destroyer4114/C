#include<iostream>
using namespace std;
int rev(long int n){
    long int j=0;
    while(n>0){
        j=j*10+(n%10);
        n=n/10;
    }
    return j;
}
int main(){
    int t;  
    cin>>t;
    while(t--){
        long int k,r,p;
        cin>>k;
        r=k;
        int s=0;
        while(r>0){
            s++;
            r=r/10;
        }
        p=k;
        if(s%2==0){
            int m=1;
            for (int i=0;i<s/2;i++){
                p=p/10;
                m=m*10;
            }
            p= p*m+rev(p);
            if (p<=k){
                p=k;
                p=p/m;
                p++;
                p=p*m+rev(p);

            }

        }
        else{
            int m=1;
            for (int i=0;i<s/2+1;i++){
                p=p/10;
                m=m*10;
            }
            p= p*m+rev(p/10);
            if (p<=k){
                p=k;
                p=p/m;
                p++;
                p=p*m+rev(p/10);

            }
        cout<<p<<endl;

        }
        

    }
}    