#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *temp=NULL;

node *create_linkedList(node *head)
{

    int num=0;
    while(num!=-1)
    {
        cout<<"Enter number u want to insert"<<endl;
        cin>>num;

        if(num!=-1)
        {

            node *newnode=new node();
            newnode->next=NULL;
            newnode->data=num;

            if(head==NULL)
            {
                head=temp=newnode;
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

struct node *form_loop(node *head,int pos)
{
    node *temp=head;
    node *loop;
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            loop=temp;
        }
        count++;
        temp=temp->next;
    }
    temp->next=loop;

    return head;
    
}

bool detect_cycle(node *head)
{
    node *slow=head;
    node *fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}

void remove_cycle(node *head)
{
    node *slow=head;
    node *fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

    fast=head;

    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }

    slow->next=NULL;
    
}

node *display(node *head)
{
    node *temp=head;
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
    cout<<"Enter 1 to create a linked list\n";
    cout<<"Enter 2 to display a Linked list"<<endl;
    cout<<"Enter 3 to create a cycle in Linked List"<<endl;
    cout<<"Enter 4 to detect a cycle in Linked Lists"<<endl;
    cout<<"Enter 5 to remove a Linked list"<<endl;
    int op;
    do
    {
        cout<<"Enter opeartion of your choice"<<endl;
        cin>>op;

        switch(op)
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
                cout<<"Linked list displayed"<<endl;
                break;
            }

            case 3:
            {
                int p;
                cout<<"Enter position u want to form a cycle"<<endl;
                cin>>p;

                head=form_loop(head,p);    //Don't run display everytime after creating a loop 
                break;
            }

            case 4:
            {
                bool res=0;
                res=detect_cycle(head);
                if (res==true)
                {
                    cout<<"Loop detected"<<endl;
                }
                else
                {
                    cout<<"No loop"<<endl;
                }
                break;
            }

            case 5:
            {
                remove_cycle(head);
                cout<<"Loop removed"<<endl;
                break;
            }
        }
    } while (op!=99);
    cout<<"Done!!!"<<endl;
    
    return 0;
}