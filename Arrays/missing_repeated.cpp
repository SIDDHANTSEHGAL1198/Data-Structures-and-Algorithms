#include <iostream>
#include <cmath>
using namespace std;

void missing_rep(int arr[],int n)
{
    int i;
    int max=0;
    int sum=0;

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(max<arr[i])
        {
            max=arr[i];
        }
    }


    int hash[100000];

    for(i=0;i<=max;i++)
    {
        hash[i]=0;
    }

    for(i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    int rep=0;

    int total=0;
    total=(n*(n+1))/2;

    for(i=0;i<=max;i++)
    {
        if(hash[i]>1)
        {
            rep=i;
        }
    }

    int missing=total-(sum-rep);

    cout<<"Repeated element=>"<<rep<<endl;
    cout<<"Missing elemnt==>"<<missing;



}

int main()
{
    int n;
    cout<<"Enter size\n";
    cin>>n;
    int arr[10000];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    missing_rep(arr,n);
    
    return 0;
}