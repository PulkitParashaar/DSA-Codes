#include<stdio.h>
int stack[20],top=-1,a;
void push();
int main()
{
    int num;
    printf("Enter the number to convert: ");    
    scanf("%d",&num);
    int i;
    for(i=0;num>0;i++)    
    {    
        a=num%16;
        push();
        num=num/16;    
    }   
    for(int i=top;i>=0;i--)
    {
        printf("%x\t",stack[i]);
    }

}
void push()
{
        top=top+1;
        stack[top]=a;
    
}

