#include<stdio.h>
void swapNumbers(int *x,int *y,int z)
{   for (int i =0;i<z;i++){
    int tmp;
    tmp=*(y+i);
    *(y+i)=*(x+i);
    *(x+i)=tmp;
}
}
int main(){
    int k;
    scanf("%d",&k);
    int a[100];
    int b[100];
    for (int i=0;i<k;i++){
        scanf("%d",&a[i]);

    }
    for (int i=0;i<k;i++){
        scanf("%d",&b[i]);

    }
    swapNumbers(a,b,k);
    for (int i=0;i<k;i++){
        printf("%d ",a[i]);

    }
    printf("\n");
    for (int i=0;i<k;i++){
        printf("%d " ,b[i]);

    }
     printf("\n");
    
}