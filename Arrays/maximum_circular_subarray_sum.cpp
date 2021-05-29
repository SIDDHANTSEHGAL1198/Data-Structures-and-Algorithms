#include <iostream>
using namespace std;

int kadane(int arr[],int n)
{
    int i,j,max_ele=0,sum=0;
    for(i=0;i<n;i++)
    {
       sum=sum+arr[i];
       if(sum<0)
       {
           sum=0;
       }
       max_ele=max(sum,max_ele);
    }
    return max_ele;
}

int main()
{
    int i,n,sum1=0;
    cout<<"Enter array size"<<endl;
    cin>>n;

    int arr[10000];
    cout<<"Enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int wrap=kadane(arr,n);

    for(i=0;i<n;i++)
    {
        sum1+=arr[i];
        arr[i]=-arr[i];
    }
    int nonwrap=kadane(arr,n);
    
    int wrapsum=sum1+nonwrap;
    cout<<wrap<<" "<<nonwrap<<" "<<wrapsum<<" "<<sum1<<endl;
    cout<<"Result->"<<max(wrapsum,wrap);
    return 0;
}