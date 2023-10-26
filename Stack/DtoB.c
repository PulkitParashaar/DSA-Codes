#include<stdio.h>
int stack[20],top=-1,a;
void push()
{       
        top=top+1;
        stack[top]=a;
    
}
int main()
{
    int num;
    printf("Enter the number to convert: ");    
    scanf("%d",&num);
    int i;
    for(i=0;num>0;i++)    
    {    
        a=num%2;
        push();    
        num=num/2;    
    }   
    for(int i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
    }

}
