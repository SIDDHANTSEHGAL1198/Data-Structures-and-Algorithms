#include <iostream>
using namespace std;

int max_subarray_product(int arr[],int n)
{
    int i,j,max=arr[0],sum=1;
    for(i=0;i<n;i++)
    {
        sum=1;
        j=i;
        while(j<n)
        {
            sum*=arr[j];
            j++;
            if(max<sum)
            {
                max=sum;
            }
        }
       

    }
    return max;
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

    int result=max_subarray_product(arr,n);
    cout<<"Maximum Subarray Product==>"<<result<<endl;
    return 0;
}