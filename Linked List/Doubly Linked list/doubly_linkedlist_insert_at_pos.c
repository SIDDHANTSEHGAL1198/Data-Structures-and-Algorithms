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
    struct node *head;
    head=0;
    struct node *temp;
    struct node *newnode;
    int choice=1;
    int count=0;
    int i=1,pos;
    
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        
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
        printf("Do u want to continue (0 or 1)\n");
        scanf("%d",&choice);
    }
    
    temp=head;
    printf("Printing the Doubly linked list\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    
    
    printf("\nEnter the position at which u want to enter the element\n");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("\nInvalid position entered\n");
    }
    if(pos==1)
    {
        struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data u want to insert at begining of doubly linked list\n");
    scanf("%d",&new->data);
    new->prev=0;
    new->next=0;
    
    head->prev=new;
    new->next=head;
    head=new;
    
    temp=head;
    printf("Printing the Doubly linked list after insertion at begining\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    }
    else
    {
        struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data u want to insert at any position of doubly linked list\n");
    scanf("%d",&new->data);
    new->prev=0;
    new->next=0;
    
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    
    new->prev=temp;
    new->next=temp->next;
    temp->next=new;
    new->next->prev=new;
    
    temp=head;
    printf("Printing the Doubly linked list after insertion at any position\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    }
    return 0;
}