#include <iostream>
#include <cmath>
using namespace std;

int max_subarray_sum(int arr[],int n)
{
    int i,j,max_ele=0,sum=0;
    for(i=0;i<n;i++)
    {
       sum=sum+arr[i];
       if(sum<0)
       {
           sum=0;
       }
       max_ele=max(max_ele,sum);
    }
    return max_ele;
}

int main()
{
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;

    int arr[10000];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int result=max_subarray_sum(arr,n);
    cout<<"Maximum Subarray sum==>"<<result<<endl;
    return 0;
}