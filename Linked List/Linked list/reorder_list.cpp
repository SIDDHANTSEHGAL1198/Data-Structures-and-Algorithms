#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *temp;
struct node *head;

struct node *create_linked_list(struct node *head)
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
            new_node->next=NULL;
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

node *reorder_list(node *head)
{
    temp=head;
    node *slow=head;
    node *fast=head;

    node *head1=NULL;
    node *head2=NULL;

    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    head1=head;           // Head node of first half
    head2=slow->next;     // headd node of second half
    node *temp2=head2;

    slow->next=NULL;       

    node *temp1=head1;


    temp2=head2;


    node *nextnode,*current,*previous;              //Reversing second linked list
    nextnode=head2;
    current=head2;
    previous=NULL;

    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        current->next=previous;
        previous=current;
        current=nextnode;
    }
    head2=previous;

    temp2=head2;


    node *result=new node;               //merging 2 list in result list 
    result->data=-1;
    result->next=NULL;
    node *curr=result;
    while(head1!=NULL || head2!=NULL)
    {
        if(head1)
        {
            curr->next=head1;
            curr=curr->next;
            head1=head1->next;
        }

        if(head2)
        {
            curr->next=head2;
            curr=curr->next;
            head2=head2->next;
        }

    }

    return result->next;            //returning head node of reordered list
    
}

struct node *display(struct node *head)
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
    int op=0;
    int n=0;
    cout<<"Press 1 to create linked list"<<endl;
    cout<<"Press 2 to display linked list"<<endl;
    cout<<"Press 3 for Reorder list"<<endl;

    do
    {
        cout<<"Enter operation of ur choice\n";
        cin>>op;

        switch(op)
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
                cout<<"List created"<<endl;
                break;
            }

            case 3:
            {
                head=reorder_list(head);
                cout<<"List Reordered"<<endl;
                break;
            }
        }
    } while (op!=4);

    cout<<"Khatam Tata Goodbye Ho gya!!";
}