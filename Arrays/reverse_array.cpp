#include <iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int s=0;
    int temp=0;
    int e=n-1;

    while(s<e)
    {
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int arr[10000];

    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    reverse(arr,n);
    return 0;
}