#include <iostream>
using namespace std;
int main()
{
    int i,j,size;
    cout<<"Enter the size of the array\n";
    cin>>size;
    int arr[100];
    
    cout<<"Enter array elements\n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int temp=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"Sorted array is \n";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}