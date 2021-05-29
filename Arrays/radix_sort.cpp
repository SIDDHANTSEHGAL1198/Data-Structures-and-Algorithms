#include <iostream>
using namespace std;

int get_max(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    
    return max;
}

void count_sort(int arr[],int n,int pos)
{
    int count[n+1];
    int i;
    for(i=0;i<=n;i++)
    {
        count[i]=0;
    }

    for(i=0;i<n;i++)
    {
        count[(arr[i]/pos)%10]+=1;
    }

    int res[n];
    for(i=1;i<=n;i++)
    {
        count[i]+=count[i-1];
    }

    for(i=0;i<n;i++)
    {
        res[i]=0;
    }

    for(i=n-1;i>=0;i--)
    {
        res[--count[(arr[i]/pos)%10]]=arr[i];
    }

    for(i=0;i<n;i++)
    {
        arr[i]=res[i];
    }

    

}

void radix_sort(int arr[],int n)
{
    int max=get_max(arr,n);

    cout<<max<<endl;
    for(int pos=1;(max/pos)>0;pos*10)
    {
        count_sort(arr,n,pos); 
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

    radix_sort(arr,n);
    cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}