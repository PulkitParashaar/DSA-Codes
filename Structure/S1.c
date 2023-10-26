#include<stdio.h>
struct student
{
    int rollnumber;
    char name[25];
    float m[10];
}S;
void main()
{
    printf("Enter the details:\n");
    scanf("%d%s",&S.rollnumber,S.name);
    printf("Enter marks in 6 subject:");
    for(int i=0;i<6;i++)
    {
       scanf("%f",&S.m[i]);
    }
    for(int j=0;j<6;j++)
    {
        for(int k=j+1;k<6;k++)
        {
        if(S.m[j]>S.m[k])
        {
        float t=S.m[j];
        S.m[j]=S.m[k];
        S.m[k]=t;
        }
        }
    }
    for(int i=0;i<6;i++)
    {
       printf("%f\t",S.m[i]);
    }
    float sum=S.m[2]+S.m[3]+S.m[4]+S.m[5];
    float percentage=sum/4;
    if(percentage>=95)
    {
        printf("Eligible for Du");
    }
    else
    {
        printf("Not Eligible for Du");
    }
}



