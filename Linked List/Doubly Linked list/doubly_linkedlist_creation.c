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
    struct node *head=0;
    struct node *temp;
    struct node *newnode;
    int choice=1;

    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter node\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;

        if (head==NULL)
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

    temp=head;
    printf("Printing Doubly linked list\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;

}


