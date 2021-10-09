#include <iostream>
#include <algorithm>
using namespace std;


	int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a[51]={0},s=0;
        {
            for(int i=0;i<51;i++)
            {
                cin>>a[i];
                s++;
                if(cin.get()=='\n')
                break;
            }
        }
        for(int i=0;i<51;i++)
        {
            if(a[i]==s-1)
            {
                 a[i]=-1;
                 break;
            }
        }
        sort(a,a+51);
        cout<<a[50]<<endl;
    }
	
	return 0;
}
	
