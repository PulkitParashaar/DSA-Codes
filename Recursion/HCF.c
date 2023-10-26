#include<stdio.h>
int hcf(int a,int b)
{
    if(a%b==0){
       return b;
    }
    else{
       return hcf((b),(a%b));
    }

}
int main()
{
    int a,b;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    printf("HCF of %d and %d is %d",a,b,hcf(a,b));


}