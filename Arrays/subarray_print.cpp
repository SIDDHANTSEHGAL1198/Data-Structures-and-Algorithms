#include <iostream>
#include <cmath>
#include<limits.h>
using namespace std;

void subarray_print(int arr[],int n)
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
            cout<<arr[j]<<" ";
            j++;
        }
        cout<<endl;
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

    
    subarray_print(arr,n);
    return 0;
}
