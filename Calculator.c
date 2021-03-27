#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    char a;
    printf("Enter first number: ");
    scanf("%f",&x);
    printf("Enter second number: ");
    scanf("%f",&y);
    printf("Enter the operator: ");
    scanf(" %c", &a);

    if (a=='+'){
        z=x+y;
    }
    else if (a=='-'){
        if (x>y){
            z=x-y;
        }
        else {
            z= y-x;
        }
    }
    else if (a=='*'){
        z=x*y;

    }
    else if (a=='/'){
        if (y==0){
            printf("Error\n");
        }
        else {
            z = x/y;
        }
    }
    else {
        printf("Error\n");
    }
    printf("Required result is %f",z);

}
