#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
node *head=NULL;
node *temp=NULL;

node *create_linkedList(node *head)
{
    node *newnode;
    int num=0;

    while(num!=-1)
    {
        cout<<"Enter number or -1 to terminate"<<endl;
        cin>>num;
        newnode=new node;

        if(num!=-1)
        {
            
            newnode->data=num;
            newnode->next=NULL;

            if(head==NULL)
            {
                temp=head=newnode;
            }
            else
            {
                temp->next=newnode;
                temp=newnode;
            }
        } 
    }
    return head;
}

node *segregate(node *head)
{
    node *even=NULL;
    node *odd=NULL;
    node *e=NULL,*o=NULL;

    temp=head;
    while(temp!=NULL)
    {
        if(temp->data%2 == 0)
        {
            if(even==NULL)
            {
                even=temp;
                e=temp;
            }
            else
            {
                e->next=temp;
                e=e->next;
            }          
        }

        else if(temp->data %2 == 1)
        {
            if(odd==NULL)
            {
                odd=temp;
                o=temp;
            }
            else
            {
                o->next=temp;
                o=o->next;
            }
        }

        temp=temp->next;
        
    }

    if(even==NULL)
    {
        return odd;
    }
    if(odd==NULL)
    {
        return even;
    }
    e->next=odd;
    if(odd!=NULL)
    {
        o->next=NULL;
    }
    return even;

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
    int ch=0;
    cout<<"Press 1 to create a linked list"<<endl;
    cout<<"Press 2 to display"<<endl;
    cout<<"Press 3 Segregate even and odd"<<endl;

    do
    {
        
        cout<<"Enter opeartion of ur choice"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
            {
                head=create_linkedList(head);
                cout<<"List created"<<endl;
                break;
            }

            case 2:
            {
                head=display(head);
                cout<<"List displayed"<<endl;
                break;
            }

            case 3:
            {
                head=segregate(head);
                cout<<"Task done"<<endl;
                break;
            }
        }

    } while (ch!=4);
    
}