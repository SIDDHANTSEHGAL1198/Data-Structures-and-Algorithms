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
    
    
    printf("\nEnter the position after which u want to insert the element\n");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("\nInvalid position entered\n");
    }
    else
    {
        struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data u want to insert after given position of doubly linked list\n");
    scanf("%d",&new->data);
    new->prev=0;
    new->next=0;
    
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    
    new->prev=temp;
    new->next=temp->next;
    temp->next=new;
    new->next->prev=new;
    
    temp=head;
    printf("Printing the Doubly linked list after insertion of given position\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    }
    
    
    
    return 0;
}