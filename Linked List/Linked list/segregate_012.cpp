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
    node *zero=NULL;
    node *one=NULL;
    node *two=NULL;
    node *z=NULL,*o=NULL,*t=NULL;

    temp=head;
    while(temp!=NULL)
    {
        if(temp->data == 0)
        {
            if(zero==NULL)
            {
                zero=temp;
                z=temp;
            }
            else
            {
                z->next=temp;
                z=z->next;
                z->next=NULL;
            }          
        }

        else if(temp->data == 1)
        {
            if(one==NULL)
            {
                one=temp;
                o=temp;
            }
            else
            {
                o->next=temp;
                o=o->next;
            }
        }

        else if(temp->data == 2)
        {
            if(two==NULL)
            {
                two=temp;
                t=temp;
            }
            else
            {
                t->next=temp;
                t=t->next;
            }
        }

        temp=temp->next;
        
    }

    z->next=one;
    o->next=two;
    t->next=NULL;
    return zero;
    

    
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
    cout<<"Press 3 Segregate zero,ones and twos"<<endl;

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