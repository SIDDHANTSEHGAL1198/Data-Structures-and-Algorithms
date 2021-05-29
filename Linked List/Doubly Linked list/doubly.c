#include <stdio.h>
#include <malloc.h>
void create();
void display();
void insert_at_begin();
void insert_at_end();
void insert_at_givn_pos();
void insert_after_pos();
void delete_at_begin();
void delete_at_end();
void delete_from_givn_pos();


struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=0;
struct node *temp;

int count=1;
void create()
{
    
    
    int choice=1;
    struct node *newnode;
    while(choice)
    {
        printf("Enter node\n");
        newnode=(struct node*)malloc(sizeof(struct node));
        
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
            count++;
           
        }

        printf("Do u want to continue\n");
        scanf("%d",&choice);
    }
    
}

void insert_at_begin()
{
    struct node *num;
    num=(struct node*)malloc(sizeof(struct node));
    printf("Enter number u want to end at begining position\n");
    scanf("%d ",&num->data);
    num->next=0;
    num->prev=0;

    temp=head;

    head->prev=num;
    num->next=head;
    head=num;

}

void insert_at_end()
{
    struct node *num;
    num=(struct node*)malloc(sizeof(struct node));
    printf("Enter node u want to enter at the end\n");
    scanf("%d",&num->data);
    num->prev=0;
    num->next=0;

    //Inserting node at end
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=num;
    num->prev=temp;
    temp=num;
}

void insert_at_givn_pos()
{
    int pos=0;
    printf("Enter the position at which u want to enter\n");
    scanf("%d",&pos);
    

    int i=1;

    if(pos>count)
    {
        printf("Invalid position\n");
    }
    if(pos==1)
    {
        insert_at_begin();
    }
    if(pos<count)
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

    }


}

void insert_after_pos()
{
    int pos=0;
    printf("Enter the position at which u want to enter\n");
    scanf("%d",&pos);
    

    int i=1;
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter number u want to insert\n");
    scanf("%d",&new->data);
    new->prev=0;
    new->next=0;

    if(pos<0 || pos>count)
    {
        printf("Invalid position");
    }
    if(pos<count)
    {
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }

        new->next=temp->next;
        temp->next->prev=new;
        temp->next=new;
        new->prev=temp;

    }

}

void delete_at_begin()
{
    struct node *t;
    t=head;
    head=t->next;
    head->prev=0;
    free(t);
}

void delete_at_end()
{
    struct node *t;
    t=temp;
    t->prev->next=0;
    temp=t->next;
    free(t);
}

void delete_from_givn_pos()
{
    int i=1;
    int pos;
    struct node *t;
    temp=head;
    printf("Enter position u want to delete\n");
    scanf("%d",&pos);

    if(pos>count || pos<0)
    {
        printf("Invalid input");
    }
    if(pos==1)
    {
        delete_at_begin();
    }
    if(pos<count)
    {
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        t=temp->next;
        temp->next=t->next;
        t->next->prev=temp;
        free(t);

    }
}

void display()
{
    temp=head;
    int count=0;
    printf("Printing Doubly linked list\n");
    while(temp!=0)
    {
        count++;
        printf("%d ",temp->data);
        temp=temp->next;
        
    }  
    printf("\nNumber of nodes=%d",count);
}

void main()
{
    printf("Enter 1 to Create  Doubly linked list\n");
    printf("Enter 2 to insert at begining\n");
    printf("Enter 3 to insert at end\n");
    printf("Enter 4 to insert at given position\n");
    printf("Enter 5 to insert after given position\n");
    printf("Enter 6 to delete at begining\n");
    printf("Enter 7 to delete at the end\n");
    printf("Enter 8 to delete from given position\n");

    int a;
    printf("Enter opertaion=");
    scanf("%d ",&a);
    switch(a)
    {
        
    case 1:
    {
        create();
        display();
        break;
    }
    case 2:
    {
        create();
        insert_at_begin();
        display();
        break;
    }
    case 3:
    {
        create();
        insert_at_end();
        display();
        break;
    }

    case 4:
    {
        create();
        insert_at_givn_pos();
        display();
    }

    case 5:
    {
        create();
        insert_after_pos();
        display();
    }

    case 6:
    {
        create();
        delete_at_begin();
        display();
    }

    case 7:
    {
        create();
        delete_at_end();
        display();
    }

    case 8:
    {
        create();
        delete_from_givn_pos();
        display();
    }

    default:
    {
        printf("  \n");
    }
    }
    
    

}
