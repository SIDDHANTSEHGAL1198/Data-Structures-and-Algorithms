#include <iostream>
using namespace std;

int queue[5];
int rear=-1;
int front=-1;
int n=5;

void enqueue(int val)
{
    if(rear==n-1)
    {
        cout<<"Queue is full"<<endl;
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        queue[++rear]=val;
    }
    else
    {
        queue[++rear]=val;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
}

void peek()
{
    cout<<"Peeked Value-->"<<queue[front]<<endl;
}

void display()
{
    int i;
    cout<<"Displaying Queue"<<endl;
    for(i=front;i<=rear;i++)
    {
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peek();
    dequeue(); 
    peek();
    display();
    return 0;
}