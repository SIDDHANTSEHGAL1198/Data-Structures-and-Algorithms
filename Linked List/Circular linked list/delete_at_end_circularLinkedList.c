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
    
    
    
    //Delete at end
    
    struct node *current;
    struct node *prev;
    
    current=tail->next;
    while(current->next!=tail->next)
    {
        prev=current;
        current=current->next;
    }
    prev->next=tail->next;
    tail=prev;
    free(current);
    
     temp=head;
    printf("\nPrinting Circular linked list after deletion at end\n");
    while(temp->next!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    return 0;
}