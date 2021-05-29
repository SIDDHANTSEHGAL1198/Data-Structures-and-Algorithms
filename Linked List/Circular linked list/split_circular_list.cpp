#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *temp;
struct node *head1=NULL;
struct node *head2=NULL;
struct node *final_head=NULL;

struct node *create(struct node *final_head)
{
    int number=0;
    while(number!=-1)
    {
        cout<<"Enter number or -1 to terminate"<<endl;
        cin>>number;

        if(number!=-1)
        {
            node *newnode;
            newnode=new node;
            newnode->data=number;
            newnode->next=NULL;

            if(final_head==NULL)
            {
                temp=final_head=newnode;
                
            }
            else
            {
                temp->next=newnode;
                temp=newnode;
            }
            temp->next=final_head;
        }
    }
    return final_head;
}

struct node *display(struct node *final_head)
{
    temp=final_head;

    while(temp->next!=final_head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    cout<<endl;

    return final_head;

}

node *split_list(node *final_head)
{
    struct node *slow=final_head;
    struct node *fast=final_head;

    while(fast->next!=final_head && fast->next->next!=final_head)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    cout<<"Half last==>"<<slow->data<<endl;
    cout<<"Second Half==>"<<fast->data<<endl;

    head1=final_head;
    head2=slow->next;

    slow->next=final_head;
    
    head1=final_head;
    temp=head1;

    cout<<"First half"<<endl;
    while(temp->next!=head1)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;

    
    

    node *curr=NULL;
    curr=head2;
    while(curr->next!=final_head)
    {
        curr=curr->next;
    }
    curr->next=head2;
    cout<<curr->data<<endl;
    

    cout<<"Second Half"<<endl;
    temp=head2;


    while(temp->next!=head2)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;


    return final_head;
}



int main()
{
    final_head=create(final_head);
    cout<<"List created"<<endl;

    final_head=display(final_head);
    cout<<"List Displayed"<<endl;

    final_head=split_list(final_head);
    cout<<"List Splited"<<endl;


    return 0;
}