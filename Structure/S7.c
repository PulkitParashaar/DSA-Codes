#include<stdio.h>
struct student
{
    float chemistrymarks;
    float mathsmarks;
    float physicsmarks;
}S[15];
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the marks of %d student in chemistry,maths and physics",i+1);
        scanf("%f%f%f",&S[i].chemistrymarks,&S[i].mathsmarks,&S[i].physicsmarks);
    }
    printf("Display Details:\n");
    for(i=0;i<5;i++)
    {
        
        printf("Marks of %d student is \t%f\t%f\t%f in chemistry ,maths and physics respectively\n",i+1,S[i].chemistrymarks,S[i].mathsmarks,S[i].physicsmarks);
    }

}