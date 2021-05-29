#include <stdio.h>
#include <malloc.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    int choice=1;
    struct node *head=0;
    struct node *newnode;
    struct node *temp;

    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter number\n");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==0)
        {
            temp=head=newnode;
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
    printf("Enter node to be entered at end\n");
    scanf("%d",&num->data);
    num->next=0;

    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=num;

    temp=head;
    printf("Linked list after insertion\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }


    return 0;
}