#include <iostream>
using namespace std;

int SearchSortedRotated(int arr[],int key,int left,int right)
{
    if(left>right)
    {
        return -1;
    }

    int mid=(left+right)/2;
    if(arr[mid]==key)
    {
        return mid;
    }

    if(arr[left]<=arr[mid])
    {
        if(key>=arr[left] && key<=arr[mid])
        {
            return SearchSortedRotated(arr,key,left,mid-1);
        }
        return SearchSortedRotated(arr,key,mid+1,right);
    }

    if(key>=arr[mid] && key<=arr[right])
    {
        return SearchSortedRotated(arr,key,mid+1,right);
    }
    return SearchSortedRotated(arr,key,left,mid-1);
}

int main()
{
    int i,size;
    cout<<"Enter size of array"<<endl;
    cin>>size;

    int arr[1000000];
    cout<<"Enter array elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int key=0;
    cout<<"Enter number to be searched"<<endl;
    cin>>key;

    int res=SearchSortedRotated(arr,key,0,size-1);

    if(res!=-1)
    {
        cout<<"Element found at "<<res<<endl;
    }

    else
    {
        cout<<"Element not found ";
    }

    return 0;
}