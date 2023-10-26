#include<stdio.h>
int power(int b,int p)
{
    if(p==0){
       return 1;
    }
    else{
       return b*power(b,p-1);
    }

}
int main()
{
    int a,c;
    printf("Enter the base and power");
    scanf("%d%d",&a,&c);
    printf("Answer is %d",power(a,c));


}