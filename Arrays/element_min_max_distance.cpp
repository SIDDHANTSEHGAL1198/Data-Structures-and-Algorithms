#include <iostream>
#include <cmath>
using namespace std;

bool isFeasable(int mid,int arr[],int n,int k)
{
    int pos=arr[0],ele=1;

    for(int i=1;i<n;i++)
    {
        if(arr[i]-pos>=mid)
        {
            pos=arr[i];
            ele++;

            if(ele==k)
            {
                return true;
            }
        }
    }
    return false;
}




int largestMinDistance(int arr[],int n,int k)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int result=-1;
    int left=1,right=arr[n-1];

    while(left<right)
    {
        int mid=(left+right)/2;

        if(isFeasable(mid,arr,n,k))
        {
            result=max(result,mid);
            left=mid+1;
        }
        else
        {
            right=mid;
        }
    }

    return result;
}


int main()
{
    int k,size;
    cout<<"Enter size of array"<<endl;
    cin>>size;


    cout<<"Enter minimum distance"<<endl;
    cin>>k;
    int i;
    int arr[1000000];
    cout<<"Enter array elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Largest Minimum Distance=>>"<<largestMinDistance(arr,size,k);
    return 0;

}