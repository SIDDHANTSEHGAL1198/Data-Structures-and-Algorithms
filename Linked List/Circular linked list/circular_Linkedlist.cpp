#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *temp;

struct node *create_Linkedlist(struct node *head)
{
    int number=0;

    

    do
    {
        cout<<"Enter number or -1 to terminate"<<endl;
        cin>>number;

        if(number!=-1)
        {
            struct node *new_node;
            new_node=new node;

            new_node->data=number;
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
            temp->next=head;
        }

    }while(number!=-1);

    return head;
    
}

struct node *insert_at_start(struct node *head)
{
    struct node *temp=head;
    struct node *new_node=NULL;
    new_node=new node;

    cout<<"Enter number u wnna insert at start"<<endl;
    cin>>new_node->data;
    new_node->next=NULL;


    while(temp->next!=head)
    {
        temp=temp->next;
    }
    new_node->next=head;
    temp->next=new_node;
    head=new_node;

    return head;
}

struct node *insert_at_end(struct node *head)
{
    struct node *temp=head;
    struct node *newnode=0;
    newnode=new node;
    newnode->next=NULL;

    cout<<"Enter node u wnna insert at last"<<endl;
    cin>>newnode->data;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    temp=newnode;

    return head;

}

struct node *insert_at_pos(struct node *head,int position)
{
    struct node *temp=head;
    int i=1;

    struct node *newnode;
    newnode=new node;
    cout<<"Enter number u wnna insert at pos"<<endl;
    cin>>newnode->data;
    newnode->next=NULL;

    while(i<position-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;

    return head;
}

struct node *delete_at_start(struct node *head)
{
    struct node *temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    struct node *remove;
    
    temp->next=head->next;
    remove=head;
    head=head->next;
    free(remove);

    return head;
}

struct node *delete_at_end(struct node *head)
{
    struct node *temp=head;

    while(temp->next->next!=head)
    {
        temp=temp->next;
    }

    struct node *remove;
    remove=temp->next;
    temp->next=head;
    free(remove);

    return head;
}


struct node *delete_at_pos(struct node *head,int position)
{
    int i=1;
    struct node *temp=head;
    struct node *remove;

    while(i<position-1)
    {
        temp=temp->next;
        i++;
    }

    remove=temp->next;
    temp->next=temp->next->next;
    free(remove);

    return head;
}

struct node *count_nodes(struct node *head)
{
    int c=0;
    temp=head;

    while(temp->next!=head)
    {
        c++;
        temp=temp->next;
    }
    c++;
    cout<<"Number of nodes==>"<<c<<endl;

    return head;
}

struct node *sum_of_nodes(struct node *head)
{
    int sum=0;
    temp=head;

    while(temp->next!=head)
    {
        sum=sum+temp->data;
        temp=temp->next;
    }
    
    sum=sum+temp->data;
    
    cout<<"Sum of nodes==>"<<sum<<endl;

    return head;
}

struct node *max_node(struct node *head)
{
    int max=0;
    temp=head;

    while(temp->next!=head)
    {
        if(max<temp->data)
        {
            max=temp->data;
        }
        temp=temp->next;
    }

    if (max<temp->data)
    {
        max=temp->data;
    }
    cout<<"Maximum node==>"<<max<<endl;
    return head;

}

struct node *search_node(struct node *head,int element)
{
    temp=head;
    int k=0;

    while(temp->next!=head)
    {
        if(temp->data==element)
        {
            k=k+1;
            break;

        }
        temp=temp->next;
    }
    if(temp->data==element && k==0)
    {
        k++;
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



struct node *Display_Linkedlist(struct node *head)
{
    struct node *temp=head;

    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;

    cout<<endl;

    return head;
}

int main()
{
    int op,pos=0;

    cout<<"Press 1 to create circular linked list"<<endl;
    cout<<"Press 2 to display Circular Linked list"<<endl;
    cout<<"Press 3 to Insert at start"<<endl;
    cout<<"Press 4 to insert at end"<<endl;
    cout<<"Press 5 to insert at specified position"<<endl;
    cout<<"Press 6 to delete at start"<<endl;
    cout<<"Press 7 to delete at end"<<endl;
    cout<<"Press 8 to delete at given position"<<endl;
    cout<<"Press 9 to find number of nodes"<<endl;
    cout<<"Press 10 to find sum of nodes"<<endl;
    cout<<"Press 11 to find maximum node"<<endl;
    cout<<"Press 12 to search a node"<<endl;

    do
    {
        cout<<"Enter operation of your choice\n";
        cin>>op;

        switch(op)
        {
            case 1:
            {
                head=create_Linkedlist(head);
                cout<<"Circular Linked list created"<<endl;
                break;
            }

            case 2:
            {
                head=Display_Linkedlist(head);
                cout<<"Circular linked list displayed"<<endl;
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
                cout<<"Node inserted at end"<<endl;
                break;
            }

            case 5:
            {
                cout<<"Enter the position u wnna insert"<<endl;
                cin>>pos;
                head=insert_at_pos(head,pos);
                cout<<"Node inserted in specified position"<<endl;
                break;
            }

            case 6:
            {
                head=delete_at_start(head);
                cout<<"First node deleted"<<endl;
                break;
            }

            case 7:
            {
                head=delete_at_end(head);
                cout<<"Deletion at end pos done!!"<<endl;
                break;
            }

            case 8:
            {
                pos=0;
                cout<<"Enter position from which u wnna delete\n";
                cin>>pos;
                head=delete_at_pos(head,pos);
                cout<<"Deletion at given position done!!"<<endl;
                break;
            }

            case 9:
            {
                head=count_nodes(head);
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
                head=search_node(head,search);
                break;
            }


        }        
    } while (op!=13);

    cout<<"Khatam Tata Bye bye ho gya"<<endl;
     
    return 0;
}