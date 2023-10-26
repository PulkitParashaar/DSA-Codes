#include<stdio.h>
int sum(int n,int s)
{
    if(n==0){
       return s;
    }
    else{
       return sum((n/10),(s+n%10));
    }

}
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Sum of digit is %d",sum(a,0));
}