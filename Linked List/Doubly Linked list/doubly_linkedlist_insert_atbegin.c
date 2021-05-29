#include <stdio.h>
#include <malloc.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *temp;
    struct node *head=0;
    struct node *newnode;
    int choice=1;

    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;

        if(head==NULL)
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
    printf("Enter number u want to end at begining position\n");
    scanf("%d ",&num->data);
    num->next=0;
    num->prev=0;

    temp=head;

    head->prev=num;
    num->next=head;
    head=num;

    temp=head;
    printf("\nPrinting linked list after insertion");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }



    return 0;
}