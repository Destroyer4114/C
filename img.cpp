#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int a=0,b=0,c=0,d=0,n=0;
    
    int i=0;
    if (s1[0]=='-'){
        n=1;
        i++;
    }
    while(s1[i]!='+'){
        a= a*10+(int)s1[i];
        i++;
    }
    if (n==1){
        a=a*(-1);
        n=0;
    }
    i++;
    if (s1[i]=='-'){
        n=1;
        i++;
    }
    while(s1[i]!='i'){
        b= b*10+(int)s1[i];
        i++;
    }
    if (n==1){
        b=b*(-1);
        n=0;
    }

    i=0;
    if (s2[0]=='-'){
        n=1;
        i++;
    }
    while(s2[i]!='+'){
        c= c*10+(int)s2[i];
        i++;
    }
    if (n==1){
        c=c*(-1);
        n=0;
    }
    i++;
    if (s2[i]=='-'){
        n=1;
        i++;
    }
    while(s2[i]!='i'){
        d= d*10+(int)s2[i];
        i++;
    }
    if (n==1){
        d=d*(-1);
        n=0;
    }
    cout<<(a*c-b*d)<<"+"<<(a*b+c*d)<<"i"<<endl;

    






}