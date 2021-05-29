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


void merge_list(node *head1,node *head2)
{
    temp=head1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=head2;

    node *ptr=head1;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
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