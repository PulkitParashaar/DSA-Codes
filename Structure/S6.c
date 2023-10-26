#include<stdio.h>
struct complex
{
    int h1;
    int m1;
    int s1;
    int h2;
    int m2;
    int s2;
}s;
int main()
{
    int hsum,msum,ssum,d;
    printf("Enter the values of hour from(1-24),minute from(0-60),second from(0-60)");
    printf("Enter the first time :\n");
    printf("Enter the hour , minute and second:\n");
    scanf("%d%d%d",&s.h1,&s.m1,&s.s1);
    printf("Enter the second time:\n");
    printf("Enter the hour,minute and second:\n");
    scanf("%d%d%d",&s.h2,&s.m2,&s.s2);

    hsum=s.h1+s.h2;
    msum=s.m1+s.m2;
    ssum=s.s1+s.s2;

    if(ssum>=60){
        ssum=ssum-60;
        msum=msum+1;
    }

    if(msum>=60){
        hsum=hsum+1;
        msum=msum-60;
    }

    if(hsum>=24){
        d=1;
        hsum=hsum-24;
    }

    if(d==1){
       printf("The new time is %d:%d:%d:%d",d,hsum,msum,ssum); 
    }
    else{
    printf("The new complex number is %d:%d:%d",hsum,msum,ssum);
    }
}