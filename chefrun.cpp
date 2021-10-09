#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--)
    {
        float x1,x2,x3,v1,v2;
        cin>>x1>>x2>>x3>>v1>>v2;
        float xc = (x2>x1)?x2-x1:x1-x2;
        float xk = (x2>x3)?x2-x3:x3-x2;
        if (xc/v1 == xk/v2)
        {
            cout<<"Draw"<<endl;
        }
        else if (xc/v1 <=xk/v2)
        {
            cout<<"Chef"<<endl;
        }
        else if (xc/v1 > xk/v2)
        {
            cout<<"Kefa"<<endl;
        }
        
    }
    
    return 0;
}