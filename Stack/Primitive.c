#include<stdio.h>
int stack[20],n,x,top=-1;
void push();
void pop();
void display();
void main()
{
    printf("Enter the capacity: ");
    scanf("%d",&n);
    int choice;
    do
    {
        printf("Enter the choice\n1.Push\n2.Pop\n3.Display");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            default:
            printf("Enter the valid choice between 1 to 3");
        }
    } while(choice!=4);
    
}
void push()
{
    if(top>=n-1)
    {
        printf("Overflow");
    }
    else
    {
        top=top+1;
        printf("Enter the element");
        scanf("%d",&x);
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("Underflow");
    }
    else
    {
        x=stack[top];
        top=top-1;
    }
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d\t",stack[i]);
    }
}
