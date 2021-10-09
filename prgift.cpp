#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int n1,b,count=0;
        cin>>n1>>b;
        int arr[n1];
        for (int i = 0; i < n1; i++)
        {
            cin>>arr[i];
            if (arr[i]%2==0)
            {
                count++;
            }
            
        }
        if(b==0){
            if(count==n1){
                cout<<"NO"<<endl;
                
            }
            else{
                cout<<"YES"<<endl;
            }
            continue;
        }
        if (count >= b)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}