#include<stdio.h>
int TOH(int n,char A,char B,char C)
{
    if(n==1){
        printf("Move %d disc from %c to %c\n",n,A,C);
        return;
    }
    TOH(n-1,A,C,B);
    printf("Move %d disc from %c to %c\n",n,A,B);
    TOH(n-1,C,A,B);

}
int main()
{
  TOH(3,'A','B','C');
}
