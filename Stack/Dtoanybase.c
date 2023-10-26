#include<stdio.h>
int main()
{
    int n,i,stack[20],b;
    printf("Enter the number to convert: ");    
    scanf("%d",&n); 
    printf("Enter the base in which to be converted");
    scanf("%d",&b); 
    for(i=0;n>0;i++)    
    {    
        stack[i]=n%b;    
        n=n/b;    
    }    
    printf("\nBinary of Given Number is=");    
    for(i=i-1;i>=0;i--)    
    {    
    printf("%d",stack[i]);    
    }    
}