#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
node *head;
node *temp;

node *create_linked_list(node *head)
{
    struct node *new_node,*temp;
    int num=0;
    
    while(num!=-1)
    {
        cout<<"Enter number or -1 to terminate\n";
        cin>>num;
        new_node=new node;

        if(num!=-1)
        {
            
            new_node->data=num;
            new_node->next=0;
            if(head==NULL)
            {
                head=temp=new_node;
            }
            else
            {
                temp->next=new_node;
                temp=new_node;
            }           
        }   
    }
    return head; 
}

node *add_one(node *head)
{

    node *current=head;
    node *nextnode=head;
    node *prev=NULL;

    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }
    head=prev;

    temp=head;
    int carry=1;
    while(temp!=NULL)
    {
        if(temp->data!=9)
        {
            temp->data+=carry;
            carry=0;
            break;
        }
        else
        {
            
            temp->data+=carry;
            if(temp->next!=NULL)
            {
                temp->data=temp->data%10;
                carry=1;
            }
        
        }

        temp=temp->next;
    }

    current=head;
    nextnode=head;
    prev=NULL;

    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }
    head=prev;

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
    int ch;
    cout<<"Enter 1 to create linked list"<<endl;
    cout<<"Enter 2 to display linked list"<<endl;
    cout<<"Enter 3 to add one"<<endl;

    do
    {
        cout<<"Enter op of your choice"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
            {
                head=create_linked_list(head);
                cout<<"Linked list created"<<endl;
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
                head=add_one(head);
                cout<<"Task done"<<endl;
                break;
            }
        }
    }while(ch!=4);

    cout<<"Khtm tata bye bye!!"<<endl;

    return 0;
    
}