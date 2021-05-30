#include <iostream>
#include <cmath>
using namespace std;

int pow_n(int n,int p)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        int prev=pow(n,p-1);
        return n*prev;
    }
}

int main()
{
    cout<<"Enter value for n"<<endl;
    int n;
    cin>>n;
    cout<<"Enter power"<<endl;
    int p;
    cin>>p;

    int sum=pow_n(n,p);
    cout<<"Power of n is="<<sum<<endl;
    return 0;
}