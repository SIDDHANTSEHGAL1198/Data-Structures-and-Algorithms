#include <stdio.h>
#include <malloc.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=0;
    struct node *temp;
    struct node *newnode;

    int choice=1;

    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the number\n");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do u want to continue\n");
        scanf("%d",&choice);
    }

    struct node *num;
    num=(struct node*)malloc(sizeof(struct node));
    printf("enter number u want to enter at start \n");
    scanf("%d",&num->data);

    //Inserting at begining 
    num->next=head;
    head=num;

    temp=head;
    printf("Printing linked list after insertion \n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}