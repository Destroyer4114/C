#include<iostream>
#include<math.h>
 using namespace std;

 int main(){
     int t;
     cin>>t;
     while(t--){
         int p;
         cin>>p;
         int a[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
         int men=0;
         for(int i=11;i>=0;i--){
             if (p>=a[i]){
                 men+=(int)(p/a[i]);
                 p=p%a[i];
                 
             }
         }
         cout<<men<<endl;


     }

 }