#include <iostream>
#include <cmath>
using namespace std;

void dec(int n)
{
    int t=0;
    if(n==0)
    {
        cout<<0;
    }
    else
    {
        cout<<n<<" ";
        dec(n-1);
    }
}

void inc(int n)
{
    if(n==0)
    {
        cout<<n<<" ";
    }
    else
    {
        inc(n-1);
        cout<<n<<" ";
    }
}

int main()
{
    cout<<"Enter value for n"<<endl;
    int n;
    cin>>n;

    dec(n);
    cout<<endl;
    inc(n);
    return 0;
} 