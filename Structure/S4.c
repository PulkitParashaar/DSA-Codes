#include<stdio.h>
struct distance
{
    int f1;
    int f2;
    int i1;
    int i2;
}s;
int main()
{
    int fsum,isum;
    printf("Enter the first distance:\n");
    printf("Enter the feet and inches:\n");
    scanf("%d%d",&s.f1,&s.i1);
    printf("Enter the second distance:\n");
    printf("Enter the feet and inch:\n");
    scanf("%d%d",&s.f2,&s.i2);

    fsum=s.f1+s.f2;
    isum=s.i1+s.i2;

    if(isum>12)
    {
        isum=isum-12;
        fsum=fsum+1;
    }
    printf("The resultant distance is %d and %d",fsum,isum);

}