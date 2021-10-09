#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char l='A';
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L' && (l !='L' &&  l !='R')){
                x--;
            }
            if(s[i]=='R' && (l !='L' &&  l !='R')){
                x++;
            }
            if(s[i]=='U' && (l !='U' &&  l !='D')){
                y++;
            }
            if(s[i]=='D' && (l !='U' &&  l !='D')){
                y--;
            }
            l= s[i];
            // cout<<x<<" "<<y<<endl;
        }
        cout<<x<<" "<<y<<endl;
        
    }
}