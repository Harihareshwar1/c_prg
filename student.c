#include "stdio.h"
#include "stdlib.h"
struct student
{
    int rno;
    char name[30];
    char branch[40];
    float percentage;
};
int main(){

    struct student student1;
    printf("enter rollno:");
    scanf("%d",&student1.rno);
    printf("enter name:");
    scanf(" %[^\n]s",student1.name);
    printf("enter branch:");
scanf(" %[^\n]s",student1.branch);
    printf("enter percentage:");
    scanf("%f",&student1.percentage);
    printf("details:\n");
    printf("Name:%s\n",student1.name);
    printf("Rno:%d\n",student1.rno);
    printf("Branch:%s\n",student1.branch);
    printf("Percentage:%.2f",student1.percentage);
}
