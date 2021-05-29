#include <iostream>
using namespace std;

void breaking_bad(int arr[],int n)
{
    int days=0;
    int start=arr[0];
    int end=arr[n-1];
    int i=1;
    int mxm=0;
    int cases=0;

    while(i<n-2)
    {
        if(start>arr[1])
        {
            mxm=start;
            days++;
            break;
        }
        if(end>arr[n-2])
        {
            mxm=end;
            days++;
            break;
        }
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
            days++;
            if(mxm<arr[i])
            {
                mxm=arr[i];
                
            }
        }
        i++;
    }
    cout<<"Output"<<endl<<mxm<<":"<<days<<endl;
}

int main()
{
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[100000];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    breaking_bad(arr,n);
    return 0;
}