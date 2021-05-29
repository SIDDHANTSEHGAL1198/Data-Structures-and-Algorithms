#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of array\n";
    cin>>size;

    int arr[1000];

    cout<<"Enter array elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int i=0;
    int j=size-1;

    while(i<j)
    {
        while(arr[i]<0)
        {
            i++;
        }
        while(arr[j]>=0)
        {
            j--;
        }
        if(i<j)
        {
            int temp=0;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }

    cout<<"New array\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;    
}