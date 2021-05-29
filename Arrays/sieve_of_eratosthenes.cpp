#include <iostream>
using namespace std;

void prime_sieve(int num)
{
    int i=0,j=0;
    int arr[100];

    for(i=0;i<100;i++)
    {
        arr[i]=0;
    }
    for(i=2;i<=num;i++)
    {
        if(arr[i]==0)
        {
            for(j=i*i;j<=num;j=j+i)
            {
                arr[j]=1;
            }
        }
    }

    for(i=2;i<=num;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;

    prime_sieve(n);
    return 0;
}