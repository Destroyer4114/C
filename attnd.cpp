#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string fn[n];
        string ln[n];
        int r[n]={0};
        for(int i=0;i<n;i++)
        {
            string f, l;
            cin >> f >> l;
            for(int j=0;j<i;j++){
                if(fn[j]==f){
                    r[j]=1;
                    r[i]=1;
                }
            }
            fn[i]=f;
            ln[i]=l;
        }
        for(int i=0;i<n;i++){
            if (r[i]==0){
                cout<<fn[i]<<endl;
            }
            else{
                cout<<fn[i]<<" "<<ln[i]<<endl;
            }
        }

    }
}