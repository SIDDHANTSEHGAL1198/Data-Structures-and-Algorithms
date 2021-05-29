#include <iostream>
using namespace std;

#define n 5

class stack
{
    int *arr;
    int top;

    public:
    stack()
    {
        arr=new int[n];
        top=-1;
    }

    void push(int data)
    {
        if(top==n-1)
        {
            cout<<"Overflow Condition"<<endl;
        }
        else
        {
            top++;
            arr[top]=data;
        }
    }

    int pop()
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

    int peek()
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

};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    

    cout<<st.peek();
    return 0;
}