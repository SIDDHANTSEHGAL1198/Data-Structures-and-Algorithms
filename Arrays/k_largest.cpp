#include <iostream>
using namespace std;;
void k_largest(int arr[],int size,int k)
{
    int temp=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }

    cout<<"k-th largest number==>"<<arr[size-k];

}


int main()
{
    cout<<"Enter size of array"<<endl;
    int size;
    cin>>size;

    int k,arr[1000];
    cout<<"Enter array elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"Enter k-th largest number\n";
    cin>>k;

    k_largest(arr,size,k);

    return 0;
}