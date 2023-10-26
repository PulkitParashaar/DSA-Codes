#include<stdio.h>
int fact(int n,int f)
{
    if(n==0||n==1){
       return f;
    }
    else{
       return fact((n-1),n*f);
    }

}
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    printf("Factorial of %d is %d",a,fact(a,1));


}