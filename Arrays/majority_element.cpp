#include <iostream>
#include <cmath>
using namespace std;

int majority(int arr[],int n)
{
    int i;
    int max=0;

    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }


    int hash[max];

    for(i=0;i<=max;i++)
    {
        hash[i]=0;
    }

    for(i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    int ele=0;


    for(i=0;i<=max;i++)
    {
        if(hash[i]>=1)
        {
            if(hash[i]>=n/2)
            {
                ele=i;
            }
        }
    }

    if(ele==0)
    {
        return -1;
    }
    else
    {
        return ele;
    }


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

    int res=majority(arr,n);
    cout<<"Majority element--->"<<res;
    return 0;
}