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
        printf("Enter the number\n");
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
        printf("Do u want to continue\n");
        scanf("%d",&choice);
    }

   int i=1;
   int pos;
   printf("Enter position\n");
   scanf("%d",&pos);

   temp=head;

   struct node *t;
   while(i<pos-1)
   {
       temp=temp->next;
       i++;

   }
   t=temp->next;
   temp->next=t->next;
   free(t);

   temp=head;
   printf("Linked list after deletion\n");
   while(temp!=0)
   {
       printf("%d ",temp->data);
       temp=temp->next;
   }



    return 0;
}