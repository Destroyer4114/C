#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n];
        for( int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                cin>>arr[i][j];
            }
        }

        for (int i=n-1;n=1;i--){
            for(int j=0;j<i;j++){
                if (arr[i][j]>arr[i][j+1]){
                    arr[i-1][j]=arr[i-1][j]+arr[i][j];
                }
                else{
                     arr[i-1][j]=arr[i-1][j]+arr[i][j+1];
                }
            }
        }
        cout<<arr[0][0]<<endl;
    }
}