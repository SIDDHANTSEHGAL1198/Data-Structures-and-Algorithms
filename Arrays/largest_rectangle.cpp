#include <iostream>
#include <cmath>
using namespace std;

void largest_rectangle(int arr[],int n)
{
    int ans=0;
    int i,j;
    for(i=0;i<n;i++)
    {
        int min_height=INT32_MAX;
        for(j=i;j<n;j++)
        {
            min_height=min(arr[j],min_height);
            int len=j-i+1;
            ans=max(ans,len*min_height);
        }
    }

    cout<<"Largest Rectangle Area="<<ans<<endl;
}

int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[10000];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    largest_rectangle(arr,n);
    return 0;
}