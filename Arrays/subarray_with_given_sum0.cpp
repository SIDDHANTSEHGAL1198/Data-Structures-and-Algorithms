#include <iostream>
using namespace std;

void subarray_zero(int arr[],int n)
{
    int i=0,j,sum=0,k=0,res=0;
    while(i<n)
    {
        j=i;
        sum=0;
        while(j<n)
        {
            sum+=arr[j];
            j++;
           
            if (sum==0)
            {
                k++;
                break;
            }
        }
        i++;
    }

    cout<<k<<endl;
    if(k==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    
}



int main()
{
    int n;
    cout<<"Enter array size\n";
    cin>>n;
    int arr[100000];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    
    subarray_zero(arr,n);
    return 0;
}