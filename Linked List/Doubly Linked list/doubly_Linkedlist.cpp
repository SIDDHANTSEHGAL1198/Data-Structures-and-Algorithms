#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
struct node *temp;

struct node *doubly_creation(struct node *head)
{
    int num=0;
    while(num!=-1)
    {
        cout<<"Enter number or -1 to terminate"<<endl;
        cin>>num;
        if(num!=-1)
        {
            struct node *newnode;
            newnode=new node;
            
            newnode->data=num;
            newnode->prev=NULL;
            newnode->next=NULL;
            
            if(head==0)
            {
                head=temp=newnode;
            }
            else
            {
                temp->next=newnode;
                newnode->prev=temp;
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

    cout<<"Enter node u wnna insert\n";
    cin>>newnode->data;
    newnode->next=0;
    newnode->prev=0;

    newnode->next=head;
    head->prev=newnode;
    head=newnode;

    return head;
}

struct node *insert_at_end(struct node *head)
{
    struct node *temp=head;
    struct node *newnode;
    newnode=new node;
    cout<<"Enter node u wnna enter at end"<<endl;
    cin>>newnode->data;
    newnode->prev=0;
    newnode->next=0;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;

    return head;
}

struct node *insert_at_given_pos(struct node *head,int pos)
{
    if(pos<0)
    {
        cout<<"Invalid Position"<<endl;
    }
    else
    {
        int i=1;
        struct node *temp=head;
        struct node *newnode;
        newnode=new node;
        cout<<"Enter element u wnna insert"<<endl;
        cin>>newnode->data;
        newnode->prev=0;
        newnode->next=0;

        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }


        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->prev=newnode;

        return head;

    }
}

struct node *delete_at_start(struct node *head)
{
    struct node *remove=NULL;
    remove=head;
    head=head->next;
    head->prev=NULL;
    free(remove);

    return head;
}

struct node *delete_at_end(struct node *head)
{
    struct node *remove=NULL;
    struct node *temp=head;

    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    remove=temp->next;
    temp->next=NULL;
    free(remove);

    return head;
    
}

struct node *delete_at_pos(struct node *head,int pos)
{
    int i=1;
    struct node *temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }

    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    free(temp);

    return head;
}

struct node *total_sum(struct node *head)
{
    struct node *temp=head;

    int sum=0;
    while(temp!=0)
    {
        sum+=temp->data;
        temp=temp->next;
    }

    cout<<"Sum of Nodes=>>"<<sum<<endl;

    return head;
}

struct node *max_element(struct node *head)
{
    int max=0;
    struct node *temp=head;

    while(temp!=0)
    {
        if(max<temp->data)
        {
            max=temp->data;
        }
        temp=temp->next;
    } 

    cout<<"Max Node==>"<<max<<endl;

    return head;

}

struct node *count_nodes(struct node *head)
{
    struct node *temp=head;

    int c=0;
    while(temp!=0)
    {
        c++;
        temp=temp->next;
    }

    cout<<"Number of Nodes=>>"<<c<<endl;

    return head;
}

struct node *search_node(struct node *head,int search)
{
    struct node *temp=head;
    int k=0;

    while(temp!=0)
    {
        if(temp->data==search)
        {
            k++;
            break;
        }
        temp=temp->next;
    }

    if(k==1)
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }

    return head;
}

struct node *insert_sorted(node *head,int data)
{
    temp=head;

    node *newnode;
    newnode=new node;
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;

    while(temp->next->data<data)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    newnode->prev=temp;
    temp->next=newnode;

    return head;
}

node *reverse_list(node *head)
{
    node *current=head;
    node *nextnode=NULL;
    node *t=NULL;
    while (current!=0)
    {
       
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        head=current;
        current=nextnode;
    }

    return head;
    
}

struct node *Doubly_display(struct node *head)
{
    struct node *temp;
    temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return head;
    
}




int main()
{
    int op,pos;
     
    cout<<"Press 1 to create a Doubly Linked list"<<endl;
    cout<<"Press 2 to display a Doubly Linked list"<<endl;
    cout<<"Press 3 to insert at begining"<<endl;
    cout<<"Press 4 to insert at end\n";
    cout<<"Press 5 to insert at given position"<<endl;
    cout<<"Press 6 to delete at start"<<endl;
    cout<<"Press 7 to delete at end"<<endl;
    cout<<"Press 8 to delete att given position"<<endl;
    cout<<"Press 9 to find sum of nodes"<<endl;
    cout<<"Press 10 to find max node"<<endl;
    cout<<"Press 11 to count number of nodes\n";
    cout<<"Press 12 to serach a linked list"<<endl;
    cout<<"Press 13 to insert in sorted list"<<endl;
    cout<<"Press 14 to reverse doubly linked list"<<endl;

    do
    {
        cout<<"Enter operation of your choice"<<endl;
        cin>>op;

        switch (op)
        {
        case 1:
        {
            head=doubly_creation(head);
            cout<<"Linked list created"<<endl;
            break;
        }

        case 2:
        {
            head=Doubly_display(head);
            cout<<"\nDoubly Linked list displayed"<<endl;
            break;
        }

        case 3:
        {
            head=insert_at_start(head);
            cout<<"Node inserted at begining\n";
            break;
        }
        
        case 4:
        {
            head=insert_at_end(head);
            cout<<"Node inserted at end"<<endl;
            break;
        }

        case 5:
        {
            pos=0;
            cout<<"Enter position where u wnna insert"<<endl;
            cin>>pos;
            head=insert_at_given_pos(head,pos);
            cout<<"Node inserted at given pos"<<endl;
            break;
        }

        case 6:
        {
            head=delete_at_start(head);
            cout<<"Deletion DOne!"<<endl;
            break;
        }

        case 7:
        {
            head=delete_at_end(head);
            cout<<"Deleion at end done!"<<endl;
            break;
        }

        case 8:
        {
            pos=0;
            cout<<"Enter position"<<endl;
            cin>>pos;
            head=delete_at_pos(head,pos);
            cout<<"Deletion at pos done"<<endl;
            break;
        }

        case 9:
        {
            head=total_sum(head);
            break;
        }

        case 10:
        {
            head=max_element(head);
            break;
        }

        case 11:
        {
            head=count_nodes(head);
            break;
        }

        case 12:
        {
            int search;
            cout<<"Enter element u wnna search for\n";
            cin>>search;
            head=search_node(head,search);
            break;
        }

        case 13:
        {
            int data=0;
            cout<<"Enter number u wnna insert\n";
            cin>>data;
            head=insert_sorted(head,data);
            cout<<"Node inserted"<<endl;
            break;
        }

        case 14:
        {
            head=reverse_list(head);
            cout<<"List reversed"<<endl;
            break;
        }


        }
    }while(op!=15);

    cout<<"Khatam Tata Bye bye ho gya!!";


    return 0;
}