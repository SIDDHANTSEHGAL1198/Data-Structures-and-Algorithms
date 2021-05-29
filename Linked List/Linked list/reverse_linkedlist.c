#include <stdio.h>
#include <malloc.h>
int main()
{
    struct node 
    {
        int data;
        struct node *next;
    };

    struct node *head;
    head=0;
    struct node *newnode;
    struct node *temp;
    int choice=1;

    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter node\n");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==NULL)
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

    struct node *current;
    struct node *prevnode=0;
    struct node *nextnode;

    current=nextnode=head;

    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        current->next=prevnode;
        prevnode=current;
        current=nextnode;

    }
    head=prevnode;

    printf("\nReverse Linked list is\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }


    
    return 0;

}