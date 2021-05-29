#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *temp;
struct node *create_linked_list(struct node *);


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

struct node *insert_at_begin(struct node *head)
{
    struct node *num;
    num=new node;
    cout<<"Enter node u want to enter in begining\n";
    cin>>num->data;
    num->next=NULL;
    
    num->next=head;     //This is where magic happens😂
    head=num;

    return head;
}

struct node *insert_at_end(struct node *head)
{
    struct node *num;
    num=new node;
    cout<<"Enter node u wnna enter at end pos\n"; 
    cin>>num->data;
    num->next=NULL;

    struct node *temp=head;                 
    while(temp->next!=NULL)      //Look out for this 1
    {
        temp=temp->next;
    }

    temp->next=num;
    temp=num;

    return head;


}

struct node *insert_at_giv_pos(struct node *head,int pos)
{
    int i=1;
    if(pos<0)
    {
        cout<<"Invalid Position";
        return head;
    }
    else
    {
        struct node *num;
        num=new node;

        cout<<"Enter node u wnna insert\n";
        cin>>num->data;
        num->next=0;


        struct node *temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }

        num->next=temp->next;
        temp->next=num;

        return head;

    }

}

struct node *delete_at_start(struct node *head)
{
    struct node *temp=head;

    head=head->next;
    free(temp);

    return head;
}

struct node *delete_at_end(struct node *head)
{
    struct node *temp=head;
    struct node *remove;

    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }

    remove=temp->next;
    temp->next=NULL;
    free(remove);
    
    return head;
}

struct node *delete_at_givn_pos(struct node *head,int pos)
{
    struct node *temp=head;
    int i=1;
    if(pos<0)
    {
        cout<<"Invalid Position"<<endl;
        return head;
    }
    else
    {
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }

        struct node *remove;
        remove=temp->next;
        temp->next=temp->next->next;

        free(remove);

        return head;
    }
}

struct node *count_number_of_nodes(struct node *head)
{
    struct node *temp=head;
    int count=0;

    while(temp!=0)
    {
        count++;
        temp=temp->next;
    }

    cout<<"Number of Nodes==>>"<<count<<endl;
    return head;
}


struct node *sort_Linkedlist(struct node *head)
{
    struct node *i,*j;
    i=head;
    j=head->next;

    int temp=0;
    for(i=head;i->next!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            if(i->data>j->data)
            {
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
    }

    cout<<"Sorted Linked List"<<endl;
    struct node *temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }

    cout<<endl;
    return head;
}

struct node *sum_Linkedlist(struct node *head)
{
    struct node *temp=head;
    int sum=0;

    while(temp!=NULL)
    {
        sum+=temp->data;
        temp=temp->next;
    }

    cout<<"Sum of Linked List==>"<<sum<<endl;
    return head;
}

struct node *max_node(struct node *head)
{
    struct node *temp=head;
    int max=0;

    while(temp!=NULL)
    {
        if(temp->data>max)
        {
            max=temp->data;
        }
        temp=temp->next;
    }

    cout<<"Maximum node in Linked List==>"<<max<<endl;
    return head;
}

struct node *Linkedlist_search(struct node *head,int element)
{
    int k=0;
    struct node *temp=head;

    while(temp!=NULL)
    {
        if(temp->data==element)
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


struct node *reverse_Linkedlist(struct node *head)
{
    struct node *prev=NULL;
    struct node *nextnode=head;
    struct node *current=head;

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

//////**********************************************************MAIN FUNCTION****************************************************************//////

int main()
{
    
    int op,search;

    cout<<"Press 1 to create a linked list"<<endl;
    cout<<"Press 2 to display"<<endl;
    cout<<"Press 3 to insert at begining"<<endl;
    cout<<"Press 4 to insert at end"<<endl;
    cout<<"Press 5 to insert after given position"<<endl;
    cout<<"Press 6 to delete from begining"<<endl;
    cout<<"Press 7 to delete from end"<<endl;
    cout<<"Press 8 to delete from given position"<<endl;
    cout<<"Press 9 to count number of nodes"<<endl;
    cout<<"Press 10 to sort the Linked List"<<endl;
    cout<<"Press 11 to find sum of linked list\n";
    cout<<"Press 12 to find maximum node in linked list"<<endl;
    cout<<"Press 13 to search a linked list"<<endl;
    cout<<"Press 14 to reverse a linked list"<<endl;
    


    do
    {
        cout<<"Enter operation of your choice"<<endl;
        cin>>op;

        

        switch (op)
        {
            case 1:
            head=create_linked_list(head);
            cout<<"Linked list created\n";
            break;
            
            case 2:
            head=display(head);

            cout<<"Linked list displayed"<<endl;
            break;

            case 3:
            head=insert_at_begin(head);
            cout<<"Linked List inserted at begining"<<endl;
            break;
            
            case 4:
            head=insert_at_end(head);
            cout<<"Linked list inserted at end"<<endl;
            break;

            case 5:
            int pos;
            cout<<"Enter specified pos"<<endl;
            cin>>pos;
            head=insert_at_giv_pos(head,pos);
            cout<<"Linked list inserted at after given position"<<endl;
            break;

            case 6:
            head=delete_at_start(head);
            cout<<"First node is deleted"<<endl;
            break;

            case 7:
            head=delete_at_end(head);
            cout<<"Last Node Deleted"<<endl;
            break;

            case 8:
            int pos1;
            cout<<"Enter from which position u wnna delete"<<endl;
            cin>>pos1;
            head=delete_at_givn_pos(head,pos1);
            cout<<"NODE from Given position deleted"<<endl;
            break;

            case 9:
            head=count_number_of_nodes(head);
            break;

            case 10:
            head=sort_Linkedlist(head);
            break;

            case 11:
            head=sum_Linkedlist(head);
            break;

            case 12:
            head=max_node(head);
            break;

            case 13:
            search=0;
            cout<<"Enter element u wnna search in Linked list"<<endl;
            cin>>search;
            head=Linkedlist_search(head,search);
            break;

            case 14:
            head=reverse_Linkedlist(head);
            break;


        }
    }while(op!=15);
    cout<<"Khatam Tata Bye Bye!!";



    return 0;
}