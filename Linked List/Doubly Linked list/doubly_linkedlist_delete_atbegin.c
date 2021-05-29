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
    struct node *temp;
    struct node *newnode;
    int choice=1;
    int count=0;
    
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
        count++;
    }
    
    printf("\nNumber of elements in doubly linked list = %d",count);
    
    temp=head;
    temp->next->prev=0;
    head=temp->next;
    free(temp);
    
    temp=head;
    int c=0;
    printf("\nPrinting Doubly linked list after deletion at begining\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        c++;
    }
    
    printf("\nNumber of elements in doubly linked list after deletion at begining = %d",c);
    
    

    return 0;
}
