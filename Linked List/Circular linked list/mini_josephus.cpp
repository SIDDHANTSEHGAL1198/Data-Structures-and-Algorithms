#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp;

node *create_circular_linked_list(node *head,int n)
{
    int i;
    node *newnode;
    head=NULL;
    
    for(i=1;i<=n;i++)
    {
        newnode=new node();
        newnode->data=i;
        newnode->next=NULL;
            
        if(head==NULL)
        {
            temp=head=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;
    }

    return head;
        
}

node *display(node *head,int n)
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


int mini_josephus(node *head)
{
    node *prev=NULL;
    temp=head;

    while(prev!=temp)
    {
        prev=temp;
        for(int i=0;i<3;i++)
        {
           
            temp=temp->next;
            prev->next=temp;
        }
    
        
        
    }

    return temp->data;
}



int main()
{
    int op=0;
    int n=0;
    cout<<"Press 1 to create circular linked list"<<endl;
    cout<<"Press 2 to display linked list"<<endl;
    cout<<"Press 3 for mini Josephus Problem"<<endl;

    do
    {
        cout<<"Enter operation of ur choice\n";
        cin>>op;

        switch(op)
        {
            case 1:
            {
                cout<<"Enter value of n"<<endl;
                cin>>n;

                head=create_circular_linked_list(head,n);
                cout<<"Linked list created"<<endl;
                break;
            }

            case 2:
            {
                head=display(head,n);
                cout<<"List created"<<endl;
                break;
            }

            case 3:
            {
                int result=0;
                result=mini_josephus(head);
                cout<<"Lucky survivor==>"<<result<<endl;
                break;
            }
        }
    } while (op!=4);

    cout<<"Khatam Tata Goodbye Ho gya!!";
    return 0;
    
}