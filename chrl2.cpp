#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cc=0,ch=0,ce=0,cf=0;
    for (int i=0;i<s.length();i++){
        if(s[i]=='C'){
            cc++;

        }
        else if (s[i]=='H'){
            ch++;
            ch= min(ch,cc);

        }
        else if (s[i]=='E'){
            ce++;
            ce=min(ce,ch);
        }
        else if (s[i]=='F'){
            cf++;
            cf=min(ce,cf);
        }
    }
    cout<<min(min(cc,ch),min(cf,ce))<<endl;
}    