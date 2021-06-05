#include <iostream>
using namespace std;

void repeated(int arr[],int n)
{
    int threshold=n/3;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    /*cout<<"Sorted array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }*/
    
    int count=1;
    i=0;
    cout<<"Elemets repeated by n/3: ";
    while(i<n)
    {
        
        while(arr[i]==arr[i+1])
        {
            count++;
            i++;
        }
        if(count>threshold)
        {
            cout<<arr[i]<<" ";
            count=1;
        }
        i++;
    }
}

int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;

    int arr[1000];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    repeated(arr,n);
    return 0;
}