#include <iostream>
using namespace std;

int deque[5];
int rear=-1;
int front=-1;
int n=5;

void insertfront(int val)
{
    if(front==rear+1 || ( front == 0 && rear==n-1))
    {
        cout<<"Deque is full"<<endl;
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        deque[front]=val;
    }
    else if(front==0)
    {
        front=n-1;
        deque[front]=val;
    }
    else
    {
        front--;
        deque[front]=val;
    }
    

}

void insertrear(int val)
{
    if(front==rear+1 || ( front == 0 && rear==n-1))
    {
        cout<<"Deque is full"<<endl;
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        deque[rear]=val;
    }
    else if (rear==n-1)
    {
        rear=0;
        deque[rear]=val;
    }
    else
    {
        rear++;
        deque[rear]=val;
    }
}

void deletefront()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Deque is empty";
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else if(front==n-1)
    {
        front=0;
    }
    else
    {
        front++;
    }
}

void deleterear()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Deque is empty";
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    if(rear==0)
    {
        rear=n-1;
    }
    else
    {
        rear--;
    }
}


void display()
{
    int i=front;
    cout<<"Displaying Deque"<<endl;
    while(i!=rear)
    {
        cout<<deque[i]<<" ";
        i=(i+1)%n;
    }
    cout<<deque[rear]<<endl;
}



int main()
{
    insertfront(2);
    insertfront(5);
    insertrear(-1);
    insertfront(0);
    insertfront(4);
    display();
    deleterear();
    display();
    insertfront(75);
    display();
    deletefront();
    display();

    return 0;
}