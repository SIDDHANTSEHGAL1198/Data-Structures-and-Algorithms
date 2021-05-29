#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int val)
{
    node *newnode=new node;
    newnode->next=NULL;
    newnode->data=val;

    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue()
{
    struct node *rem;
    rem=front;
    front=front->next;
    free(rem);
}

void display()
{
    struct node *temp;
    temp=front;
    cout<<"Displaying Queue\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void peek()
{
    cout<<"Peeked element-->"<<front->data;
    cout<<endl;
}
int main()
{
    enqueue(5);
    enqueue(0);
    enqueue(-3);
    display();
    dequeue();
    peek();
    display();
    return 0;
}