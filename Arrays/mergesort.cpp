#include <iostream>
using namespace std;

void merge(int arr[],int lb,int mid,int ub)
{
    int i=lb,j=mid+1,k=lb,temp[100];

    while ((i<=mid) && (j<=ub))
    {
        if(arr[i]<arr[j])
        {
            temp[k]=arr[i];
            i++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
    }

    for(int t=0;t<k;t++)
    {
        arr[t]=temp[t];
    }
    
    
}

void mergeSort(int arr[],int lb,int ub)
{
    if (lb<ub)
    {
        int mid=(lb+ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);

        merge(arr,lb,mid,ub);
    }
}

int main()
{
    cout<<"Enter size of array"<<endl;
    int n=0;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    int i,j;
    int arr[50];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);

    cout<<"Sorted array is\n";
     for(j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}
