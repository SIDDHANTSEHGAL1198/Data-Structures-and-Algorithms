#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of array\n";
    cin>>size;

    int arr[100];
    cout<<"Enter array elements"<<endl;
    int i,j,current=0;

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<size;i++)
    {
        j=i-1;
        current=arr[i];

        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;

    }


    cout<<"Sorted array\n";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;


}