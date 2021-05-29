#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int arr[100];

    int max=0,k=0;
    int i,j;
    cout<<"Enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    int count[max+1];

    for(i=0;i<=max;i++)
    {
        count[i]=0;
    }

    for(i=0;i<n;i++)
    {
        count[arr[i]]+=1;
    }

    for(i=1;i<=max;i++)
    {
        count[i]=count[i]+count[i-1];
    }

    int res[n];
    for(i=0;i<n;i++)
    {
        res[i]=0;
    }

    for(i=n-1;i>=0;i--)
    {
        res[--count[arr[i]]]=arr[i];
    }

    for(i=0;i<n;i++)
    {
        arr[i]=res[i];
    }

    cout<<"Sorted array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;




    
}
