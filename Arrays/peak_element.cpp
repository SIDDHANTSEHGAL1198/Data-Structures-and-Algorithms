#include <iostream>
using namespace std;

int peakElement(int arr[],int low,int high,int n)
{
    int mid=low+(high-low)/2;

    if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid]>=arr[mid+1]))
    {
        return arr[mid];
    }

    else if((arr[mid-1]>arr[mid] && mid>0))
    {
        return peakElement(arr,low,mid-1,n);
    }
    else
    {
        return peakElement(arr,mid+1,high,n);
    }
}

int main()
{
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;

    int arr[10000];
    int i;
    cout<<"Enter array elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Peak Element==>"<<peakElement(arr,0,size-1,size);
    return 0;
}