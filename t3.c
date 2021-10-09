#include<stdio.h>
int main(){
    int a=65;

    for(int i=4;i>=0;i--){
        for(int j=i;j>=0;j--){
            printf("%c",(char)(j+a));

        }
        for(int j=1;j<=i;j++){
            printf("%c",(char)(j+a));

        }
    printf("\n");
    }
    for(int i=1;i<=4;i++){
        for(int j=i;j>=0;j--){
            printf("%c",(char)(j+a));

        }
        for(int j=1;j<=i;j++){
            printf("%c",(char)(j+a));

        }
    printf("\n");
    }
}