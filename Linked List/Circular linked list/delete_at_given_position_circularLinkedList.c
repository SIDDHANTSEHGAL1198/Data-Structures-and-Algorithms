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
    struct node *temp;
    struct node *tail;
    struct node *newnode;
    int choice=1;
    int c=0;
    
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
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
        temp->next=head;
        
        printf("Do u want to continue (0 or 1)\n");
        scanf("%d",&choice);
    }
    
    
    temp=head;
    printf("Printing Circular linked list\n");
    while(temp->next!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        c++;
    }
    printf("%d",temp->data);
    c++;
    
    temp=head;
    while(temp->next!=head)
    {
        tail=temp->next;
        temp=temp->next;
    }
    
    
    
    //Delete at given position
    
    struct node *current;
    struct node *nextnode;
    
    int pos,i=1;
    printf("\nEnter the position from which u want to delete a node\n");
    scanf("%d",&pos);
    
    if(pos>c)
    {
        printf("Invalid position entered");
    }
    else
    {
        current=tail->next;
        while(i<pos-1)
        {
            current=current->next;
            i++;
        }
        nextnode=current->next;
        current->next=nextnode->next;
        free(nextnode);
        
         temp=head;
         printf("Printing Circular linked list\n");
         while(temp->next!=head)
         {
             printf("%d ",temp->data);
             temp=temp->next;
             c++;
             
         }
    printf("%d",temp->data);
        
        
    }
    return 0;
}