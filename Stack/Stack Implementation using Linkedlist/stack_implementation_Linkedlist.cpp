#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    
};
struct node *head=NULL;
struct node *temp;

node *push(node *head,int data)
{

    
    node *newnode;
    newnode=new node();
    newnode->data=data;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }

    cout<<endl;
    return head;
}

node *pop(node *head)
{
    temp=head;
    node *remove=NULL;

    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }

    remove=temp->next;
    temp->next=NULL;
    free(remove);

    return head;
}

node *peek(node *head)
{
    temp=head;
    
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }

    cout<<"Peek element==>"<<temp->next->data;
    temp=temp->next;
    cout<<endl;
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
    return head;
}

int main()
{
    int op=0;
    int ele=0;

    cout<<"Press 1 to push in stack"<<endl;
    cout<<"Press 2 to pop in stack"<<endl;
    cout<<"Press 3 to peek in stack"<<endl;
    cout<<"Press 4 to display stack"<<endl;

    do
    {
        cout<<"Enter operation of your choice or -1 to terminate"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                cout<<"Enter element u want to insert in stack"<<endl;
                cin>>ele;
                head=push(head,ele);
                break;
            }

            case 2:
            {
                head=pop(head);
                cout<<"Pop operation Done"<<endl;
                break;
            }

            case 3:
            {
                head=peek(head);
                cout<<"Peek Operation Done"<<endl;
                break;
            }

            case 4:
            {
                head=display(head);
                cout<<"\nStack Displayed"<<endl;
                break;
            }
        }
    }while (op!=-1);
    
    return 0;
}