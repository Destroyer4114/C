#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j;
        cin>>n;
        j = (int)n/8;

        switch (n%8)
        {
        case 1:
        cout<<j+4<<endl;
            break;
        case 2:
        cout<<j+5<<endl;
            break;
        case 3:
        cout<<j+6<<endl;
            break;
        case 4:
        cout<<j+1<<endl;
            break;
        case 5:
        cout<<j+2<<endl;
            break;
        case 6:
        cout<<j+3<<endl;
            break;
        case 7:
        cout<<j+8<<endl;
            break;
        case 0:
        cout<<j+7-1<<endl;
            break;
        
        
        }
    }

}
