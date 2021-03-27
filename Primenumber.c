#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y=2;
    int c=0;
    printf("Enter a number to check whether its is prime or not\n");
    scanf("%d",&x);

    if (x==1){
        printf("1 is neither prime nor composite\n");

    }
    else{
        while (y<=x){
            if (x%y==0){
                    c = c+1;
            }
            y= y+1;
            }
    if (c>1){
        printf("%d is not a prime number",x);
    }
    else {
        printf("%d is  a prime number",x);
    }
    }
}
