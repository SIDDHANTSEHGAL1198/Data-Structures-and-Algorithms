#include <iostream>
using namespace std;

int k=0;
int size=5;
int top=-1;

void push(int arr[],int data)
{
    if(top==size-1)
    {
        cout<<"Overflow Condition"<<endl;
    }
    else
    {
        top++;
        arr[top]=data;
    }
}

int pop(int arr[])
{
    if(top==-1)
    {
        cout<<"UnderFlow condition"<<endl;
        return -1;
    }
    else
    {
        int rem=arr[top];
        top--;

        return rem;
    }
}

int peek(int arr[])
{
    if(top==-1)
    {
        cout<<"Underflow condition\n";
        return -1;
    }
    else
    {
        int p=arr[top];
        return p;
    }
}

int display(int arr[])
{
    if(top==-1)
    {
        cout<<"Stack is empty\n";
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
    }
}



int main()
{
    cout<<"Enter 1 to push in stack"<<endl;
    cout<<"Enter 2 to pop in stack\n";
    cout<<"Enter 3 to perform peek in stack"<<endl;
    cout<<"Enter 4 to display stack\n";

    int op=0;
    int data=0;
    int size=5;
    int arr[5];
    do
    {
        cout<<"Enter operation u wnna perform or press -1 to termiante"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                cout<<"Enter element u wnna push in stack"<<endl;
                cin>>data;
                push(arr,data);
                break;
            }

            case 2:
            {
                int rem=pop(arr);
                cout<<"Deleted element==>"<<rem<<endl;
                break;
            }

            case 3:
            {
                int last=peek(arr);
                cout<<"Peeked element==>"<<last<<endl;
                break;
            }

            case 4:
            {
                display(arr);
                cout<<"\nStack Displayed"<<endl;
                break;
            }
        }
    }while(op!=5);
    cout<<"Done!!!!"<<endl;
    return 0;
}