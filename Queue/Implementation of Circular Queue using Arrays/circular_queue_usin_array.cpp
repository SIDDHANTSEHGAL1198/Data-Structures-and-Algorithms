#include <iostream>
using namespace std;

int queue[5];
int rear=-1;
int front=-1;
int n=5;

void enqueue(int val)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=val;
    }
    else if ((rear+1)%n==front)
    {
        cout<<"Circular Queue is full"<<endl;
    }
    else
    {
        rear=(rear+1)%n;
        queue[rear]=val;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Circular Queue is empty"<<endl;
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%n;
    }
}

void peek()
{
    cout<<"Peeked Value-->"<<queue[front]<<endl;
}

void display()
{
    int i=front;
    cout<<"Displaying Circular Queue"<<endl;
    while(i!=rear)
    {
        cout<<queue[i]<<" ";
        i=(i+1)%n;
    }
    cout<<queue[rear]<<" ";
    cout<<endl;
}

int main()
{
    enqueue(2);
    enqueue(-1);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    peek();
    dequeue(); 
    peek();
    display();
    return 0;
}