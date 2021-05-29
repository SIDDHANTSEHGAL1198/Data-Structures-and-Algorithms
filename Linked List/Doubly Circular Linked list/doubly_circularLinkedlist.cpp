#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL;
struct node *temp;

struct node *creation_linkedlist(struct node *head)
{
    int number=0;

    while(number!=-1)
    {
        cout<<"Enter any number or -1 to terminate"<<endl;
        cin>>number;
        if(number!=-1)
        {
            struct node *newnode;
            newnode=new node;
            newnode->data=number;
            newnode->prev=NULL;
            newnode->next=NULL;

            if(head==NULL)
            {
                head=temp=newnode;
            }
            else
            {
                temp->next=newnode;
                newnode->prev=temp;
                newnode->next=head;
                head->prev=newnode;
                temp=newnode;
            }

        }
        
    }
    return head;
    
}

struct node *insert_at_start(struct node *head)
{
    struct node *newnode;
    newnode=new node;
    cout<<"Enter node u wnna insert at start"<<endl;
    cin>>newnode->data;
    newnode->next=NULL;
    newnode->prev=NULL;

    newnode->prev=head->prev;
    head->prev->next=newnode;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;

    return head;
}

struct node *insert_at_end(struct node *head)
{
    struct node *newnode;
    newnode=new node;
    cout<<"Enter node u wnna enter in last pos\n";
    cin>>newnode->data;
    newnode->next=NULL;
    newnode->prev=NULL;

    newnode->prev=head->prev;
    head->prev->next=newnode;
    newnode->next=head;
    head->prev=newnode;

    return head;

}

struct node *insert_at_pos(struct node *head,int pos)
{
    int i=1;
    temp=head;

    struct node *newnode;
    newnode=new node;
    cout<<"Enter node u wnna insert at given pos\n";
    cin>>newnode->data;
    newnode->next=NULL;
    newnode->prev=NULL;

    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }

    temp->next->prev=newnode;
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;

    return head;

}

struct node *delete_at_start(struct node *head)
{
    struct node *remove;
    remove=head;

    head->next->prev=head->prev;
    head->prev->next=head->next;
    free(remove);
    head=head->next;

    return head;
}

struct node *delete_at_end(struct node *head)
{
    struct node *remove;
    remove=head->prev;

    head->prev->prev->next=head;
    head->prev=head->prev->prev;
    free(remove);

    return head;
}

struct node *delete_at_pos(struct node *head,int pos)
{
    int i=1;
    temp=head;

    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    struct node *remove;
    remove=temp->next;
    temp->next->next->prev=temp;
    temp->next=temp->next->next;
    free(remove);

    return head;
    
}

struct node *node_count(struct node *head)
{
    int count=0;
    temp=head;
    while (temp->next!=head)
    {
        count++;
        temp=temp->next;
    }
    count++;
    cout<<"Number of nodes==>"<<count<<endl;
    return head;
    
}

struct node *sum_of_nodes(struct node *head)
{
    int sum=0;
    temp=head;
    while (temp->next!=head)
    {
        sum+=temp->data;
        temp=temp->next;
    }
    sum+=temp->data;
    cout<<"Sum of Nodes==>"<<sum<<endl;
    return head;
    
}

struct node *max_node(struct node *head)
{
    int max=0;
    temp=head;
    while (temp->next!=head)
    {
        if(max<temp->data)
        {
            max=temp->data;
        }
        temp=temp->next;
    }
    if(max<temp->data)
    {
        max=temp->data;
    }
    cout<<"Maximum node==>"<<max<<endl;
    return head;
    
}

struct node *search_element(struct node *head,int element)
{
    int k=0;
    temp=head;
    while (temp->next!=head)
    {
        if(element==temp->data)
        {
            k++;
            break;
        }
        temp=temp->next;
    }
    if(element==temp->data && k==0)
    {
        k++;
    }

    if(k==1)
    {
        cout<<"Element Found\n";
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return head;
}

struct node *reverse_linked_list(struct node *head)
{
    temp=head->prev;

    head=head->prev;

    while(head->prev!=temp)
    {
        cout<<head->data<<" ";
        head=head->prev;
    }
    cout<<head->data<<endl;

    return head;
}



struct node *display_Linkedlist(struct node *head)
{
    temp=head;

    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;

    return head;

}



int main()
{
    int op,pos=0;

    cout<<"Press 1 to create Doubly Circular Linked list"<<endl;
    cout<<"Press 2 to display Doubly Circular Linked list"<<endl;
    cout<<"Press 3 to insert at start"<<endl;
    cout<<"Press 4 to insert at last pos"<<endl;
    cout<<"Press 5 to insert at given position"<<endl;
    cout<<"Press 6 to delete at start"<<endl;
    cout<<"Press 7 to delete at end"<<endl;
    cout<<"Press 8 to delete at given pos\n";
    cout<<"Press 9 to find number of nodes"<<endl;
    cout<<"Press 10 to find sum of nodes\n";
    cout<<"Press 11 to find maximum element in linked list"<<endl;
    cout<<"Press 12 to search element in linked list"<<endl;
    cout<<"Press 13 to reverse a linked list"<<endl;

    do
    {
        cout<<"Enter operation of your choice"<<endl;
        cin>>op;
        
        switch(op)
        {
            case 1:
            {
                head=creation_linkedlist(head);
                cout<<"Doubly Circular Linked list created"<<endl;
                break;
            }

            case 2:
            {
                head=display_Linkedlist(head);
                cout<<"Doubly Circular Linked list displayed"<<endl;
                break;
            }

            case 3:
            {
                head=insert_at_start(head);
                cout<<"Node inserted at start"<<endl;
                break;
            }

            case 4:
            {
                head=insert_at_end(head);
                cout<<"Node inserted at last pos"<<endl;
                break;
            }

            case 5:
            {
                pos=0;
                cout<<"Enter position u wnna insert"<<endl;
                cin>>pos;
                head=insert_at_pos(head,pos);
                cout<<"Node inserted at specified pos"<<endl;
                break;
            }

            case 6:
            {
                head=delete_at_start(head);
                cout<<"Node deleted from start\n";
                break;
            }

            case 7:
            {
                head=delete_at_end(head);
                cout<<"Node deleted from last position"<<endl;
                break;
            }

            case 8:
            {
                pos=0;
                cout<<"Enter position u wnna delete"<<endl;
                cin>>pos;
                head=delete_at_pos(head,pos);
                cout<<"Node Deleted\n";
                break;
            }

            case 9:
            {
                head=node_count(head);
                break;
            }

            case 10:
            {
                head=sum_of_nodes(head);
                break;
            }

            case 11:
            {
                head=max_node(head);
                break;
            }

            case 12:
            {
                int search=0;
                cout<<"Enter element u wnna search"<<endl;
                cin>>search;
                head=search_element(head,search);
                break;
            }

            case 13:
            {
                head=reverse_linked_list(head);
                cout<<"Linked List reversed"<<endl;
                break;
            }
        }
    } while (op!=14);
    cout<<"U r done with this topic. Now get some life."<<endl;
    
    return 0;
}