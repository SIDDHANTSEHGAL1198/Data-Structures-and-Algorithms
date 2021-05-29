#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head1;
struct node *head2;
struct node *temp;
node *head3;


struct node *create_list1(struct node *head1)
{
    struct node *new_node;
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
            if(head1==NULL)
            {
                head1=temp=new_node;
            }
            else
            {
                temp->next=new_node;
                temp=new_node;
            }           
        }   
    }
    return head1; 
}

struct node *create_list2(struct node *head2)
{
    struct node *new_node;
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
            if(head2==NULL)
            {
                head2=temp=new_node;
            }
            else
            {
                temp->next=new_node;
                temp=new_node;
            }           
        }   
    }
    return head2; 
}

void merge(int data)
{
    node *newnode=new node();
    newnode->next=NULL;

    newnode->data=data;
    newnode->next=NULL;

    head3=NULL;
    if(head3==NULL)
    {
        temp=head3=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }

    
    temp=head3;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}

void merge_list(node *head1,node *head2)
{
    node *temp1=head1;
    node *temp2=head2;
    node *t=new node;
    t->data=-1;
    t->next=NULL;
    head3=t;

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data==temp2->data)
        {
            merge(temp1->data);
            merge(temp2->data);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else
        {

        if(temp1->data<temp2->data)
        {
            merge(temp1->data);
            temp1=temp1->next;
        }
        else
        {
        if(temp1->data>temp2->data)
        {
            merge(temp2->data);
            temp2=temp2->next;
        }
        }
        }
    }

    if(temp1!=NULL && temp2==NULL)
    {

    

    while(temp1!=NULL && temp2==NULL)
    {
        merge(temp1->data);
        temp1=temp1->next;
    }
    }
    if(temp2!=NULL && temp1==NULL)
    {

    

    while(temp2!=NULL )
    {
        merge(temp2->data);
        temp2=temp2->next;
    }
    }
    
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

    cout<<"Enter 1 to enter first linked list\n";
    cout<<"Enter 2 to enter second linked list\n";
    cout<<"Enter 3 to display first linked list"<<endl;
    cout<<"Enter 4 to display second linked list"<<endl;
    cout<<"Enter 5 to merge list"<<endl;

    do
    {
        cout<<"Enter operation of ur choice"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                head1=create_list1(head1);
                cout<<"List 1 created"<<endl;
                break;
            }

            case 2:
            {
                head2=create_list2(head2);
                cout<<"List 2 created"<<endl;
                break;
            }

            case 3:
            {
                head1=display(head1);
                cout<<"List 1 displayed"<<endl;
                break;
            }

            case 4:
            {
                head2=display(head2);
                cout<<"List 2 to displayed"<<endl;
                break;
            }

            case 5:
            {
                merge_list(head1,head2);
                cout<<"Merging Done"<<endl;
                break;
            }


        }
    }while(op!=-1);
    return 0;
}