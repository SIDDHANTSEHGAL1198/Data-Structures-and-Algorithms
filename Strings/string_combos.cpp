#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int count=0;
    char st[1000];
    cout<<"Enter your word"<<endl;
    cin>>st;

    int l=0;
    int i=0;
    while(st[i]!='\0')
    {
        l++;
        i++;
    }

    int front=0,rear=l-1;
    string s1=" ";
    while(count<l+1)
    {
        i=front;
        s1=" ";
        while(i!=rear)
        {
            s1=s1+st[i];
            cout<<s1<<endl;
            i=(i+1)%l;
        }
        count++;
        front++;
        rear=(rear+1)%l;
        
    }
    
    return 0;
}