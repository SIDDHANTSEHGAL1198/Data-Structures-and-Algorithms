#include <iostream>
using namespace std;

int sum_till_n(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int prev=sum_till_n(n-1);
        return n+prev;
    }
}

int main()
{
    cout<<"Enter value for n"<<endl;
    int n;
    cin>>n;

    int sum=sum_till_n(n);
    cout<<"Sum till n is="<<sum<<endl;
    return 0;
}