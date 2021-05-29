#include <stdio.h>
#include <malloc.h>
void create();
void display();
void insert_at_begin();
void insert_at_end();
void insert_at_givn_position();
void delete_at_begin();
void delete_at_end();
void delete_at_givn_position();


struct node 
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=0;
struct node *tail;
struct node *newnode;

void create()
{
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter node\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
    

    if(head==0)
    {
        head=tail=newnode;
        head->prev=head;
        head->next=head;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        head->prev=newnode;
        newnode->next=head;
        tail=newnode;
    }




    printf("Do u want to continue\n");
    scanf("%d",&choice);
    }



}

void insert_at_begin()
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter node u want to enter\n");
    scanf("%d",&new->data);
    new->next=0;
    new->prev=0;

    
    new->next=head;
    head->prev=new;
    tail->next=new;
    new->prev=tail;
    head=new;
    
}

void insert_at_end()
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter node u want to enter at end\n");
    scanf("%d",&new->data);
    new->prev=0;
    new->next=0;

    tail->next=new;
    new->prev=tail;
    new->next=head;
    head->prev=new;
    tail=new;
}

void insert_at_givn_position()
{
    int i=1,pos=0;
    printf("Enter position u want to enter\n");
    scanf("%d",&pos);

    


    if(pos==1)
    {
        insert_at_begin();
    }
    if(pos!=1)
    {
        struct node *new,*temp;
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the node u want to insert\n");
        scanf("%d",&new->data);
        new->next=0;
        new->prev=0;
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        new->next=temp->next;
        new->prev=temp;
        temp->next->prev=new;
        temp->next=new;
    }
   
}

void delete_at_begin()
{
    struct node *t;


    tail->next=head->next;
    head->next->prev=tail;
    t=head;
    head=head->next;
    free(t);
}

void delete_at_end()
{
    struct node *t;


    head->prev=tail->prev;
    tail->prev->next=head;
    t=tail;
    tail=tail->prev;
    free(t);

}

void delete_at_givn_position()
{
    struct node *t,*temp;
    int pos=0,i=1;
    printf("Enter position u wnna delete\n");
    scanf("%d",&pos);

    temp=head;
      while(i<pos)
      {
          temp=temp->next;
          i++;
      }
      temp->prev->next=temp->next;
      temp->next->prev=temp->prev;
      if(temp->next==head)
      {
          tail=temp->prev;
          free(temp);
      }
      else
      {
          free(temp);
      }
}

void display()
{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d ",tail->data);
        tail=tail->next;
    }
    printf("%d",tail->data);
}


void main()
{
    int a=0;

    printf("Enter 1 to create and display doubly circular linked list\n");
    printf("Enter 2 to insert at begining\n");
    printf("Enter 3 to insert at end\n");
    printf("Enter 4 to insert at given position\n");
    printf("Enter 5 to delete from begining\n");
    printf("Enter 6 to delete from end\n");
    printf("Enter 7 to delete from given position\n");
    printf("Enter choice\n");
    scanf("%d",&a);
    
    
    switch (a)
    {
        case 1:
        {
            create();
            display();
        }
        case 2:
        {
            create();
            insert_at_begin();
            display();
        }
        case 3:
        {
            create();
            insert_at_end();
            display();
        }
        case 4:
        {
            create();
            insert_at_givn_position();
            display();
        }
        case 5:
        {
            create();
            delete_at_begin();
            display();
        }

        case 6:
        {
            create();
            delete_at_end();
            display();
        }

        case 7:
        {
            create();
            delete_at_givn_position();
            display();
        }

        default:
        {
            printf("\n");
        }
    }

}


