#include <stdio.h>
#include <malloc.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *front;
    struct node *rear;
    struct node *newnode;
    front=0;
    rear=0;
    struct node *temp;
    int choice=1;
    int num;
    
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&num);
        newnode->data=num;
        newnode->next=0;
        
        if(front==0 && rear==0)
        {
            front=rear=newnode;
            rear->next=front;
        }
        else
        {
            rear->next=newnode;
            rear=newnode;
            newnode->next=front;
        }
        printf("Do u want to continue (0 or 1)\n");
        scanf("%d",&choice);
    }
    
    //Peek Operation
    printf("Element to be peeked out in Circular queue =%d",front->data);

    return 0;
}
