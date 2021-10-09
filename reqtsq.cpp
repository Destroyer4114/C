#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int r=__gcd(n,m);
        cout<< (n*m)/(r*r)<<endl;

        

    }
}    