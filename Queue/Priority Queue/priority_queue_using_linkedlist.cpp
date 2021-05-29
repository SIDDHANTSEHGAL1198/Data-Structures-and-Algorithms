#include <iostream>
using namespace std;
struct node
{
    char data;
    struct node *next;
    int pri;
};
struct node *head=NULL;
struct node *temp;

struct node *insert_in_pqueue(struct node *head)
{
        char val;
        int p;
        struct node *newnode;
        newnode=new node;
        cout<<"Enter character u want to insert"<<endl;
        cin>>val;
        cout<<"Enter priority"<<endl;
        cin>>p;
       
        

        newnode->data=val;
        newnode->pri=p;
       

        if(head==NULL || p< head->pri)
        {
            newnode->next=head;
            head=newnode;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL && temp->next->pri<=p )
            {
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
        }
    
    return head;
}

node *deletion(node *head)
{
    if(head==NULL)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        struct node *rem=NULL;
        rem=head;
        head=head->next;
        free(rem);

    }
    return head;
}

node *display(node *head)
{
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return head;
}

int main()
{

    cout<<"Enter 1 to insert in priority queue"<<endl;
    cout<<"Enter 2 to dekete from priority queue"<<endl;

    int op=0;
    do
    {
        cout<<"Enter operation of your choice"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
               
              head=insert_in_pqueue(head);
              break;

            }

            case 2:
            {
                cout<<"Priority Queue Displayed"<<endl;
                head=display(head);
                break;
            }
            case 3:
            {
                head=deletion(head);
                break;
            }
        }
    } while(op!=99);
    cout<<"Khatam tata good bye"<<endl;
    
    return 0;
}