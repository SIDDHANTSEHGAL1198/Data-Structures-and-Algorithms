#include <iostream>
#include <algorithm>
using namespace std;

int min_jumps(int arr[],int n)
{
    int jump=0;
    int pos=0;
    int i=0;
    int max=0;
    while(i!=n-1)
    {
        pos=arr[i];
        if(arr[i]==0)
        {
            return -1;
        }
        if(arr[0]>n-1)
        {
            return 1;
        }
        max=*max_element(arr,arr+pos);
        if(i+max==n-1)
        {
            return jump;
        }
        i+=max;
        jump++;
        if(i+max>n-1)
        {
            return ++jump;
        }

    }
    return jump;
}

int main()
{
    int n;
    int arr[1000];

    cout<<"Enter sizze of array"<<endl;
    cin>>n;

    int i;
    cout<<"Enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int res=min_jumps(arr,n);
    cout<<"Minimum number of jumps==>"<<res<<endl;
    return 0;
}