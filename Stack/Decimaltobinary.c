#include<stdio.h>
int stack[20],top=-1;
void push(int n1);
int main()
{
    int num;
    printf("Enter the number to convert: ");    
    scanf("%d",&num);
    int i,a;
    for(i=0;num>0;i++)    
    {    
        a=num%2;
        push(a);    
        num=num/2;    
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

