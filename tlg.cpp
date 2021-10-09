#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int suma=0;
    int sumb=0;
    int d=0,rp=0;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        suma += a;
        sumb +=b;
        if (suma>sumb){
            if (d<(suma-sumb)){
                d= suma -sumb;
                rp=1;

            }
        }
        else{
            if (d<(sumb-suma)){
                d= sumb -suma;
                rp=2;

            }

        }




    }   
    cout<<rp<<" "<<d<<endl;
    

        
    return 0;
}