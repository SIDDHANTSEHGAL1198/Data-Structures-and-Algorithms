#include <iostream>
#include <cmath>
#include<limits.h>
using namespace std;

void subarray_sum(int arr[],int n,int sum)
{
    int i=0;
    int j=0;

    int sub=0;
    while(i<n)
    {
        sub=0;
        j=i;
        while(j<n)
        {
            sub+=arr[j];
            if(sub==sum)
            {
                cout<<"Starting index=>"<<i<<endl;
                cout<<"Ending index=>"<<j<<endl;
                break;
            }
            j++;
        }
        i++;
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

    int sum=0;
    cout<<"Enter subarray sum"<<endl;
    cin>>sum;

    subarray_sum(arr,n,sum);
    return 0;
}
