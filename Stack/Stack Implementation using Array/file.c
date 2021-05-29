#include <stdio.h>
#include <malloc.h>
void pop();
void peek();
void display();
void push();



int size=5;
int top=-1;
int s[5];
int c=1;

void push()
{
    int num=0;
    printf("Enter number u want to enter\n");
    scanf("%d",&num);

    if(top==size-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        s[top]=num;
    }

}

void pop()
{
    if (top==-1)
    {
        printf("Underflow condition\n");
    }
    else
    {
        int item=0;
        item=s[top];
        top--;
        printf("Popped item is=%d",item);
    }
    
}


void peek()
{
    if (top==-1)
    {
        printf("Underflow condition\n");
    }
    else
    {
        int item=0;
        item=s[top];
        top--;
        printf("Peeked item is=%d",item);
    } 
}

void display()
{
    int i;
    printf("Stack elements are\n");
    for(i=top;i>=0;i--)
    {
        printf("%d ",s[i]);
    }
}


void main()
{
    
    while(c)
    {
        printf("Enter 1 to PUSH\n");
        printf("Enter 2 to POP\n");
        printf("Enter 3 to PEEK\n");
        printf("Enter 4 to DISPLAY\n");
    
        int a;
        printf("Enter operation of your choice\n");
        scanf("%d",&a);


        switch(a)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            
            default:
            {
                printf("\n");
            }
            
            }
            printf("Do u want to continue\n");
            scanf("%d ",&c);

    }
    
    



}
