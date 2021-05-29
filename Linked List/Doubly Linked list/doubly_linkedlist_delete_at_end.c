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
    struct node *head;
    head=0;
    struct node *newnode;
    struct node *temp;
    int choice=1;
    
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        
        if(head==0)
        {
            temp=head=newnode;
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
    printf("Printing Doubly linked list\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
   temp=head;
   while(temp->next!=0)
   {
       temp=temp->next;
   }
   temp->prev->next=0;
   free(temp);
   
   temp=head;
   printf("\nPrinting Doubly linked list after deletion at end\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
