#include<stdio.h>
int stack[20],top=-1;
void push(int n1);
void main()
{
    int num;
    printf("Enter the number to convert: ");    
    scanf("%d",&num);
    int i,a;
    for(i=0;num>0;i++)    
    {    
        a=num%8;
        push(a);    
        num=num/8;    
    }   
    for(int i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
    }

}
void push(int n1)
{
        top=top+1;
        stack[top]=n1;
    
}

