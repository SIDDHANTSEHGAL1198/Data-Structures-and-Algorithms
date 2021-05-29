#include <stdio.h>
#include <malloc.h>
void create();
void display();
void insert_at_begin();
void insert_at_end();
void insert_at_givn_pos();
void delete_at_begin();
void delet_at_end();
void delet_at_givnpos();

struct node
{
    int data;
    struct node *next;
};
struct node *head=0;
struct node *temp;
struct node *newnode;


void create()
{
    int choice=1;

    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter element\n");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;

        printf("Do u wna continue\n");
        scanf("%d",&choice);
    }

}

void insert_at_begin()
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter element u want to enter\n");
    scanf("%d",&new->data);
    new->next=0;

    new->next=head;
    head=new;
    temp->next=head;

}

void insert_at_end()
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter element u want to enter\n");
    scanf("%d",&new->data);
    new->next=0;

    new->next=head;
    temp->next=new;
    
    temp=new;
}

void insert_at_givn_pos()
{
    int i=1,pos;
    printf("Enter position u want to enter\n");
    scanf("%d",&pos);

    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter element u want to enter\n");
    scanf("%d",&new->data);
    new->next=0;

    if(pos==1)
    {
        insert_at_begin();
    }
    else
    {
         temp=head;
       while(i<pos-1)
       {
           temp=temp->next;
           i++;
       }
       new->next=temp->next;
       temp->next=new;
    }
}

void delete_at_begin()
{
    struct node *t;
    temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }

    t=temp->next;
    temp->next=t->next;
    head=t->next;
    free(t);
}

void delet_at_end()
{
    temp=head;
    struct node *t;
    while(temp->next->next!=head)
    {
        temp=temp->next;
    }
    t=temp->next;
    temp->next=temp->next->next;
    free(t);
}

void delet_at_givnpos()
{
    printf("Enter position u want to enter\n");
    int pos;
    scanf("%d",&pos);
    int i=1;
    temp=head;

    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }

    struct node *t;
    t=temp->next;
    temp->next=t->next;
    free(t);

}

    void display()
    {
        
        temp=head;
        
        while(temp->next!=head)
        {
            printf("%d ",temp->data);
            temp=temp->next;
            
        }
        printf("%d",temp->data);
        
    }


    void main()
    {
        printf("Enter 1 to Create Circular linked list\n");
        printf("Enter 2 to insert at begining\n");
        printf("Enter 3 to insert at end\n");
        printf("Enter 4 to insert at given position\n");
        printf("Enter 5 to delete at begining\n");
        printf("Enter 6 to delete at end\n");
        printf("Enter 7 to delete at given position\n");


        int a;

        printf("Enter operation\n");
        scanf("%d",&a);


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
                break;
            }

            case 5:
            {
                create();
                delete_at_begin();
                display();
                break;
            }

            case 6:
            {
                create();
                delet_at_end();
                display();
            }

            case 7:
            {
                create();
                delet_at_givnpos();
                display();
            }


            default:
            {
                printf("\n");
            }
        }
    }


    
