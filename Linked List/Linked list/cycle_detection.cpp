#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *temp=NULL;

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

bool cycle_detection(node *head)
{
    int i;
    temp=head;
    int hash[100000];
    for(i=0;i<100000;i++)
    {
        hash[i]=0;
    }

    while(temp!=NULL)
    {
        int p=0;
        p=temp->data;
        if(p<0)
        {
            p=1000-(p);
        }

        hash[p]+=1;
        for(i=0;i<100000;i++)
        {
            if(hash[i]>1)
            {
                return true;
            }
        }
        temp=temp->next;

    }
    return false;

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

    do
    {
        cout<<"Enter opeartion\n";
        cin>>op;

        switch(op)
        {
            case 1:
            {
                head=create_linked_list(head);
                cout<<"Lists created\n";
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
                bool res;
                res=cycle_detection(head);
                cout<<"Result==>"<<res<<endl;
                break;
            }
        }
    } while (op!=4);
    return 0;

}