#include<stdio.h>
struct complex
{
    int i1;
    int r1;
    int i2;
    int r2;
}s;
int main()
{
    int isum,rsum;
    printf("Enter the first complex number:\n");
    printf("Enter the real part and imaginary part:\n");
    scanf("%d%d",&s.r1,&s.i1);
    printf("Enter the second complex number:\n");
    printf("Enter the real part and imaginary part:\n");
    scanf("%d%d",&s.r2,&s.i2);

    rsum=s.r1+s.r2;
    isum=s.i1+s.i2;

    printf("The new complex number is %d+(%d)i:",rsum,isum);
}