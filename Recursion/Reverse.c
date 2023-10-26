#include<stdio.h>
int rev(int n,int s)
{
    if(n==0){
       return s;
    }
    else{
       return rev((n/10),(s*10+n%10));
    }

}
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    printf("Reverse of %d is %d",a,rev(a,0));


}