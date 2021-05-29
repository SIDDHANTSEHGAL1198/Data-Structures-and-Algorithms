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
        printf("Enter number\n");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if (head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }

        printf("Do u wna continue\n");
        scanf("%d",&choice);



    }


    temp=head;
    head=head->next;
    free(temp);

    struct node *t;
    t=head;
    printf("Linked list aftr deletion at start\n");
    while(t!=0)
    {
        printf("%d ",t->data);
        t=t->next;
    }
    return 0;
}