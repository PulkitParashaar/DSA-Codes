#include<stdio.h>
int fib(int n)
{
    if(n==1||n==2){
      return n-1;
    } 
    else{
      return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int a;
    printf("Enter no. of term");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
    printf("%d\t",fib(i));
    }
    
}