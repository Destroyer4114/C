#include<stdio.h>

struct join{
        int date;
        int month;
        int year;

    };
struct personal
{
    char name[30];
    struct join doj;
    int salary;


};

int main(){
    
    struct personal emp;
    scanf("%[^\n]s",emp.name);
    scanf("%d",&emp.doj.date);
    scanf("%d",&emp.doj.month);
    scanf("%d",&emp.doj.year);
    scanf("%d",&emp.salary);

    printf("Name :%s\n",emp.name);
    printf("Date of joining: %d ",emp.doj.date);
    printf("%d ",emp.doj.month);
    printf("%d\n",emp.doj.year);
    printf("Salary : %d\n",emp.salary);
    return 0;

    
}
