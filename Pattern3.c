#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    unsigned int y;
    unsigned int z;

    printf("Enter a number\n");
    scanf("%d",&x);
    for(y=1;y<=x;y++ ){
            z=1;
            while (z<=y){
                printf("*");
                z = z+1;
            }
            printf("\n");
    }

}
