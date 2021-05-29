#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of array";
    cin>>size;
    int i;

    int arr[10000];

    cout<<"Enter array elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<size;i++)
    {
        arr[i]*=arr[i];
    }

    int temp=0;

    for(i=0;i<size;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"Sorted Squarred array\n";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}