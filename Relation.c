#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("Enter two integers, and i will you \ntell the relationship they satisfy: \n");

    scanf("%d",&x);
    scanf("%d",&y);
    if (x==y) {
        printf("%d is equal to %d\n",x,y);
    }
    if (x!=y) {
        printf("%d is not equal to %d\n",x,y);
    }
    if (x>y) {
        printf("%d is greater than %d\n",x,y);
    }
    if (x<y) {
        printf("%d is smaller than %d\n",x,y);
    }
    if (x<=y) {
        printf("%d is smaller than equal to %d\n",x,y);
    }
    if (x>=y) {
        printf("%d is grater than equal to %d\n",x,y);
    }
}
