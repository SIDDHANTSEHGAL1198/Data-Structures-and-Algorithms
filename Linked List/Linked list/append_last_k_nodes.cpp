#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *temp=NULL;
int len=0;

struct node *create(node *head)
{
    int num=0;
    struct node *nextnode;

    while(num!=-1)
    {
        cout<<"Enter number or -1 to terminate"<<endl;
        cin>>num;

        if(num!=-1)
        {
            nextnode=new node();
            nextnode->data=num;
            nextnode->next=NULL;

            if(head==NULL)
            {
                head=temp=nextnode;
            }
            else
            {
                temp->next=nextnode;
                temp=nextnode;
            }
        }
    }

    return head;
}

struct node *display(node *head)
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

int length_of_list(node *head)
{
    temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

struct node *appendk(node *head,int k)
{
    int l=length_of_list(head);
    temp=head;

    node *newtail,*newhead;

    int count=1;
    while(temp->next!=NULL)
    {
        if(count==l-k)
        {
            newtail=temp;
        }
        if(count==l-k+1)
        {
            newhead=temp;
        }
        temp=temp->next;
        count++;
    }
    newtail->next=NULL;
    temp->next=head;
    return newhead;
}


int main()
{
    int op=0;

    cout<<"Enter 1 to enter first linked list\n";
    cout<<"Enter 2 to display second linked list"<<endl;
    cout<<"Enter 3 to reverse k nodes in list\n";

    do
    {
        cout<<"Enter operation of ur choice"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                head=create(head);
                cout<<"List created"<<endl;
                break;
            }

            case 2:
            {
                head=display(head);
                cout<<"List  displayed"<<endl;
                break;
            }

            case 3:
            {
                int k=0;
                cout<<"Enter k number of nodes"<<endl;
                cin>>k;

                head=appendk(head,k);
                cout<<"Last k nodes appended at start"<<endl;
                break;
            }

        }
    }while(op!=99);
    cout<<"Its done and dusted"<<endl;
    return 0;
}