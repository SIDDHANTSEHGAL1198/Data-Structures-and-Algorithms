#include <iostream>
using namespace std;

void wave_sort(int arr[],int n)
{
    int i=1;
    while(i<=n-1)
    {
        if(arr[i]>arr[i-1])
        {
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;

        }
        if(arr[i]>arr[i+1] && i<=n-2)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }

        i+=2;
    }

    cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}




int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int arr[1000];
    cout<<"Enetr array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    wave_sort(arr,n);
    return 0;
}