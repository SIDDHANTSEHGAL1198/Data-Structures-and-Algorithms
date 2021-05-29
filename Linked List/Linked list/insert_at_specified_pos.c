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

    int pos=0,i=1;
    struct node *num;
    num=(struct node*)malloc(sizeof(struct node));
    printf("Enter position\n");
    scanf("%d",&pos);
    printf("Enter the element u wna enter\n");
    scanf("%d",&num->data);

    temp=head;

    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    num->next=temp->next;
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