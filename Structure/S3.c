#include<stdio.h>
struct student
{
    int rollnumber;
    char name[25],address[50];
    int age;
    float marks;
}S[15];
void main()
{
    int i;
    for(i=0;i<15;i++)
    {
        printf("Enter the detail of %d student in the order roll number,name,age,address,marks",i+1);
        scanf("%d%s%d%s%f",&S[i].rollnumber,S[i].name,&S[i].age,S[i].address,&S[i].marks);
    }
    for(i=0;i<15;i++)
    {
        printf("Display details: ");
        printf("%d\t%s\t%d\t%s\t%f",S[i].rollnumber,S[i].name,S[i].age,S[i].address,S[i].marks);
    }
}