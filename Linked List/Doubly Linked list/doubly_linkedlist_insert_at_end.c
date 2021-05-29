#include <stdio.h>
#include <malloc.h>
int main()
{
    struct node
    {
        int data;
        struct node *prev;
        struct node *next;
    };
    struct node *head=0;
    struct node *temp;
    struct node *newnode;
    int choice=1;

    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter number\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;

        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }

        printf("Do u want to continue\n");
        scanf("%d",&choice);
    }

    struct node *num;
    num=(struct node*)malloc(sizeof(struct node));
    printf("Enter node u want to enter at the end\n");
    scanf("%d",&num->data);
    num->prev=0;
    num->next=0;

    //Inserting node at end
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=num;
    num->prev=temp;
    temp=num;

    temp=head;
    printf("\nPrinting linked list after insertion at end\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}