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

node *remove(node *head,int n)
{
    temp=head;
    int count=0;

    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }

    temp=head;
    for(int i=1;i<=count-(n+1);i++)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;

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
    int ch=0;
    cout<<"Press 1 to create a linked list"<<endl;
    cout<<"Press 2 to display"<<endl;
    cout<<"Press 3 to remove nth element"<<endl;

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
                int n;
                cout<<"Enter n"<<endl;
                cin>>n;
                head=remove(head,n);
                cout<<"Task done"<<endl;
                break;
            }
        }

    } while (ch!=4);
    
}