#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int n1;
        cin>>n1;
        int a,b,d=0;
        cin>>a>>b;
        int c = a+b;
        for (int i = 0; i <= c; i++)
        {
            int e = c % (10*i);
            int f = e- c % (10*(i-1));
        
        if (f == 0)
        {
            d = d + 6;
        }
        else if (f == 1)
        {
            d = d + 2;
        }
        else if (f == 2)
        {
            d = d + 5;
        }
        else if (d == 3)
        {
            d = d + 5;
        }
        else if (f == 4)
        {
            d = d + 4;
        }
        else if (f == 5)
        {
            d = d + 5;
        }
        else if (f == 6)
        {
            d = d + 6;
        }
        else if (f == 7)
        {
            d = d + 3;
        }
        else if (f == 8)
        {
            d = d + 7;
        }
        else if (f == 9)
        {
            d = d + 6;
        }
        
        }
        
        
      cout<<d<<endl;  
    }
    
    return 0;
}