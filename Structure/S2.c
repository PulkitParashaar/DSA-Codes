#include<stdio.h>
struct student
{
    int r;
    char name[20];
    int age;
    float m;
}s[5];
int main()
{
    int i;
    for(i=0;i<=5;i++)
    {
        printf("Enter the information about the %d students: \n",i+1);
        fflush(stdin);
        printf("Enter the roll number:\n");
        scanf("%d",&s[i].r);
        fflush(stdin);
        printf("Enter the name: \n");
        scanf("%s",s[i].name);
        fflush(stdin);
        printf("Enter the age: \n");
        scanf("%d",&s[i].age);
        fflush(stdin);
        printf("Enter the marks: \n");
        scanf("%f",&s[i].m);
    }
    printf("Details of roll no. 1 is\n%s\n%d\n%f",s[0].name,s[0].age,s[0].m);
    return 0;
}