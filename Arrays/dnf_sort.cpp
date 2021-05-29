#include <iostream>
using namespace std;

void dnf_sort(int arr[],int n)
{
    int mid=0;
    int high=n-1;
    int low=0;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            int temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;

            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }

        else
        {
            int temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;

            high--;
        }


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

    dnf_sort(arr,n);
    return 0;
}